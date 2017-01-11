#!/usr/bin/env python
# coding=utf-8
# File Name: EaseRank.py
# Author:qusijun 
# Mail:wl_lian@yahoo.com
# Created Time: 日  3/20 09:52:54 2016
##############################################################
def _gcd(a,b):
    while a > 0:
        temp = a
        a =  b % a
        b = temp
    return b


def upgrade(list,init):
    cur = init
    for ele in list:
        if cur >= ele:
            cur += ele
        else:
            cur += _gcd(cur,ele)
    return cur

def main():
    while True:
        s = raw_input().strip().split(' ')
        init = int(s[1])
        li = [int(ele) for ele in raw_input().strip().split(' ')]
        print upgrade(li,init) 
        
main()




        
