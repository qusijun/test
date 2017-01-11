#!/usr/bin/env python
# coding=utf-8


class Cls(object):

    def __init__(self):
        self.__x = None

    def getx(self):
        return self.__x

    def setx(self, value):
        self.__x = value

    def delx(self):
        del self.__x

    x = property(getx, setx, delx, 'set x property')

c = Cls()
print type(c).__dict__
c.m = 100

y = c.m
print y


class Test(object):

    def __init__(self):
        self.__x =  "Test"

    @property
    def x(self):
        return self.__x

    @x.setter
    def x(self, value):
        self.__x = value

    @x.deleter
    def x(self):
        del self.__x
t = Test()
print t.x
t.m = 100
y = t.m
print y,t.x
print t.__dict__
print type(t).__dict__


class x(object):

    def __init__(self):
        self.__private = 1

# print x().__private
class A(object):
    def __init__(self):
        self.x = 1
a = A()
a.b = 100
print a.b
