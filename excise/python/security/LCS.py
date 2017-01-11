#!/usr/bin/env python
# coding=utf-8
# File Name: LCS.py
# Author:qusijun 
# Mail:wl_lian@yahoo.com
# Created Time: 六  1/ 9 10:18:54 2016
##############################################################
paths = []
def lcs(str1,str2):
    str1_len = len(str1)
    str2_len = len(str2)

    c = [[0 for i in xrange(str2_len+1)] for j in xrange(str1_len+1)]
    for i in range(1,str1_len+1):
        for j in range(1,str2_len+1):
            if str1[i-1] == str2[j-1]:
                c[i][j] = c[i-1][j-1] +1
            elif c[i-1][j] >= c[i][j-1]:
                c[i][j] = c[i-1][j]
            else:
                c[i][j] = c[i][j-1]

    
    return c

def print_path(c,str1,str2,i,j):
    path = []
    if i == 0 or j == 0 :
        return 
    if str1[i-1] == str2[j-1]:
        paths.append(str1[i-1])
        print_path(c,str1,str2,i-1,j-1)
    elif c[i-1][j] > c[i][j-1]:
        print_path(c,str1,str2,i-1,j)
    else:
        print_path(c,str1,str2,i,j-1)

        




a = "abcbdab"
b = "bdcaba"
print "输入:%s%s"%(a,b)
c = lcs(a,b)
print_path(c,a,b,len(a),len(b))

print "输出:%s,%s,%s"%("cba","dba","bba")
