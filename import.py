#!/usr/bin/env python
# coding=utf-8
# File Name: import.py
# Author:qusijun 
# Mail:wl_lian@yahoo.com
# Created Time: 六  1/23 19:15:49 2016
##############################################################
arr = [[1,2,3],[4,5,6]]
row = len(arr)
col = len(arr[0])
print row,col
tmp = [[0 for i in range(row)] for i in range(col)]
print tmp
dst = -1
for i in xrange(row):
    dst = dst + 1
    for j in xrange(col):
        print "dst:",dst 
        tmp[j][dst] = arr[i][j]
print tmp
        
