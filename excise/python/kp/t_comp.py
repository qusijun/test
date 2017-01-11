#!/usr/bin/env python
# coding=utf-8
# File Name: t_comp.py
# Author:qusijun 
# Mail:wl_lian@yahoo.com
# Created Time: 四 12/ 3 19:55:57 2015
##############################################################
t = {}
import time
def exe_time(f):
    def inner(*args,**kargs):
        t_start = time.time()
        result = f(*args,**kargs)
        time_diff = time.time() - t_start
        t[f.__name__] = time_diff
        return result
    return inner
@exe_time
def test(a,b):
    return a


print test(1,2)
print t
    

