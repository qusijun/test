#!/usr/bin/env python
# coding=utf-8
# File Name: fort.py
# Author:qusijun 
# Mail:wl_lian@yahoo.com
# Created Time: 日  3/20 10:24:16 2016
##############################################################
import math
def dis(x0,y0,x1,y1):
    return math.sqrt(math.pow(x1-x0,2)+math.pow(y1-y0,2))

def damage(li):
    R = li[0]
    x0 = li[-2]
    y0 = li[-1]
    pos = []
    d = 0
    for i in range(1,6,2):
        t = (li[i],li[i+1])
        pos.append(t)
        if dis(li[i],li[i+1],x0,y0) <= R:
            d += 1

    return str(d)+"x"

if __name__ == "__main__":
    while 1:
        li = [int(ele) for ele in raw_input().strip().split(' ')]
        print damage(li)

    


