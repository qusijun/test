#!/usr/bin/env python
# coding=utf-8

class _Missing(object):
    def __repr__(self):
        return 'no value'
    def __reduce__(self):
        return '_missing'

_missing = _Missing()

class cached_property(object):
    def __init__(self, func ,name = None ,doc=None):
        self.__name__ = name or func.__name__
        self.__module__ = func.__module__
        self.__doc__ = doc or func.__doc__
        self.func = func

    def __get__(self,obj, type=None):
        if obj is None:
            return self.__name__
        value = obj.__dict__.get(self.__name__,_missing)
        if value is _missing:
            value = self.func(obj)
            obj.__dict__[self.__name__] = value

        return value


class Foo(object):
    version = 0.01
    @cached_property
    def foo(self):
        print 'first calculte'
        result = 'this is result'
        return result 
    def __init__(self):
        self.a = 1
        
f = Foo()
print 'var:',vars(f)
print 'cls.__dict__',Foo.__dict__
print 'dir' , dir(Foo)
for name in dir(Foo):
    print getattr(Foo,name)
print 'object.__dict__' , f.__dict__['a']
print #type(f).__dict___
print type(f).__dict__['foo'].__get__(f,type(f)) == f.foo
print f.foo
print f.foo
        

class Descriptor(object):
    def __get__(self,instance,owner):
        print "__get__"
    def __set__(self,instance,value):
        print '__set__'
class DescTest(object):
    def __init__(self):
        self.desc = Descriptor()

d = DescTest()
print d.__dict__
print type(d).__dict__['desc']
