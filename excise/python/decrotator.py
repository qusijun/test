#!/usr/bin/env python
# coding=utf-8
def makeHtmlTag(tag,*args,**kwds):
    def real_decrotor(fn):
        css_class = " class = '{0}'".format(kwds["css_class"]) if "css_class" in kwds else ""
        
        def wrapped(*args,**kwds):
            return "<" + tag + css_class +">" + fn() + "</" + tag + ">"
        return wrapped
    return real_decrotor

@makeHtmlTag(tag = "b",css_class = "bold_css")
@makeHtmlTag(tag = "i",css_class = "italic_css")
def hello():
    return "hello world!"

print hello()


class MyDecorator(object):
    def __init__(self,fn):
        print "inside MyDecorator.__init__()"
        self.fn = fn

    def __call__(self):
        self.fn()
        print "inside MyDecorator.__call__()"

@MyDecorator
def aFunction():
    print "inside aFunction()"

print "Finished decorating aFunction()"

aFunction()



class MakeHtmlTagClass(object):
    def __init__(self,tag,css_class = ""):
        self.tag = tag
        self.css_class = " class = '{0}'".format(css_class) if css_class != "" else ""

    def __call__(self,fn):
        def wrapped(*args,**kwds):
            return "<" + self.tag + self.css_class + ">" + fn(*args,**kwds) + "</" + self.tag + ">"
        return wrapped

@MakeHtmlTagClass(tag = "b",css_class = "bold_css")
@MakeHtmlTagClass(tag = "i",css_class = "italic_css")
def Hello(name):
    return "Hello,{}".format(name)

print Hello("lianliankan")


def method_friendly_decorator(method_to_decorate):
    def wrapper(self,lie):
        lie = lie - 3
        return  method_to_decorate(self,lie)
    return wrapper

class Lucy(object):

    def __init__(self):
        self.age = 32

    @method_friendly_decorator
    def say_your_age(self,lie):
        print "I am %s,what did you think?" %(self.age + lie)

lucy = Lucy()
result = lucy.say_your_age(-3)
#lucy.say_your_age = method_friendly_decorator(lucy.say_your_age)
#lucy.say_your_age(-3)
#result(-4)


def a_decorator_passing_arbitrary_argument(funcotn_to_decorate):
    def a_wrapper_accepting_arbitrary_arguments(*args,**kwargs):
        print "Do I have args?:"
        print args
        print kwargs
        funcotn_to_decorate(*args,**kwargs)

    return a_wrapper_accepting_arbitrary_arguments

@a_decorator_passing_arbitrary_argument
def function_without_argument():
    print "Python is cool,no argument here."


function_without_argument()

@a_decorator_passing_arbitrary_argument
def function_with_arguments(a,b,c):
    print a,b,c


function_with_arguments(1,2,4)


@a_decorator_passing_arbitrary_argument
def function_with_named_arguments(a,b,c,platypus = "why not ?"):
    print "Do %s,%s and %s like platypus? %s" %(a,b,c,platypus)

function_with_named_arguments("Bill","Linus","Steve",platypus = "Indeed!")


class Mary(object):
    def __init__(self):
        self.age = 31

    @a_decorator_passing_arbitrary_argument
    def say_your_age(self,lie = -3):
        print "I am %s,what did you think?" %(self.age + lie)


mary = Mary()
mary.say_your_age()


def my_decorator(func):
    print "I am a ordinary function"
    def wrapper():
        print "I am function returned by the decorator"
        func()
    return wrapper

@my_decorator
def lazy_function():
    print "zzzzzzzz"

lazy_function()


def decorator_maker():
    print '''I make decorators! I am executed only once: when you make me create a decorator.'''

    def my_decorator(func):
        print " I am a decorator! I am executed only when you decorate a function."

        def wrapper():
            print '''I am the wrapper around the decorated function.
I am called when you call the decorated function.As the wrapper,I return the RESULT of the decorated function.'''
            return func()
        print "As the decorator,I return the wrapped function."
        return wrapper
    print "As the decorator maker,I return a decorator." 
    return my_decorator

new_decorator = decorator_maker()

def decorated_function():
    print "I am the decorated function."

decorated_function = new_decorator(decorated_function)

decorated_function()
   

def decorator_maker_with_arguments(decorator_arg1,decorator_arg2):

    print "I make decorators! And I accept arguments:",decorator_arg1,decorator_arg2

    def my_decorator(func):
        print "I am the decorator. Somehow you passed me arguments:",decorator_arg1,decorator_arg2

        def wrapper(function_arg1,function_arg2):
            print ("I am the wrapper around the decorator function.\n"
                  " I can access all the varibles\n"
                  "\t- from the decorator:{0} {1}\n"
                  "\t- from the function call:{2} {3}\n"
                  "Then I can pass them to the decorated function".format(decorator_arg1,decorator_arg2,function_arg1,function_arg2))
            return func(function_arg1,function_arg2)

        return wrapper
    
    return my_decorator


#@decorator_maker_with_arguments("Leonard","Sheldon")
#def decorated_function_with_arguments(function_arg1,function_arg2):
#    print ("I am the decorated function and only konws about my arguments:{0}"
#          "{1}".format(function_arg1,function_arg2))

#decorated_function_with_arguments("Rajesh","Howard")

c1 = "Penny"
c2 = "Leslie"


@decorator_maker_with_arguments("Leonard",c1)
def decorated_function_with_arguments(function_arg1,function_arg2):
    print ("I am the decorated function and only konws about my arguments:"
          "{0} {1}".format(function_arg1,function_arg2))

decorated_function_with_arguments("Leslie","Howard")

def bar():
    print bar.__name__

bar()
def bar(func):
    def wrapper():
        print "bar"
        func()
    return wrapper

@bar
def foo():
    print "foo"

print foo.__name__

import functools

def bar(func):
    @functools.wraps(func)
    def wrapper():
        print "bar"
        return func()
    return wrapper
@bar
def foo():
    print "foo"

print foo.__name__


def benchmark(func):
    import time
    def wrapper(*args,**kwargs):
        t = time.clock()
        res = func(*args,**kwargs)
        print func.__name__,time.clock()-t
        return res
    return wrapper

def logging(func):
    def wrapper(*args,**kwargs):
        res = func(*args,**kwargs)
        print func.__name__,args,kwargs
        return res
    return wrapper

def counter(func):
    def wrapper(*args,**kwargs):
        wrapper.count = wrapper.count + 1
        res = func(*args,**kwargs)
        print "{0} has been used:{1}x".format(func.__name__,wrapper.count)
        return res
    wrapper.count = 0
    return wrapper


@counter
@benchmark
@logging
def reverse_string(string):
    return str(reversed(string))

print reverse_string("Able was I ere I saw Elba")


