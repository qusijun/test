#!/usr/bin/env python
# coding=utf-8
# File Name: kp.py
# Author:qusijun 
# Mail:wl_lian@yahoo.com
# Created Time: 三 12/ 2 13:49:41 2015
##############################################################
import random
import numpy as np
#test data
n = 5
capcity = 10
w_list = [4,3,5,2,5]
v_list = [9,6,1,4,1]
#动态规划
def _dp_kp(w_list,v_list,capcity,n):
    #result = [[-1 for i in xrange(capcity+1)] for j in xrange(n+1)]
    result = np.zeros((n+1,capcity+1))
    for i in xrange(1,n+1):
        for j in xrange(capcity+1):
            result[i,j] = -1

    for i in xrange(1,n+1):
        for j in xrange(1,capcity+1):
            result[i,j] = result[i-1,j]
            if j >= w_list[i-1] and result[i,j] < result[i-1,j-w_list[i-1]] + v_list[i-1]:
                result[i,j] = result[i-1,j-w_list[i-1]] + v_list[i-1]
    return result

#近似算法
def _approx_kp(w_list,v_list,capcity,n):
    sigma = random.uniform(0,1)
    #print sigma
    K = n * 1.0 / sigma
    v_max = max(v_list)
    for i in xrange(n):
        v_list[i] = int(v_list[i] * (K / v_max))
    return _dp_kp(w_list,v_list,capcity,n)

#打印选取的元素
def _print(result,capcity,n):
    print_vec = []
    j = capcity
    for i in xrange(n,0,-1):
        if result[i,j] > result[i-1,j]:
            print_vec.append(i)
            j = j-v_list[i-1]
    return print_vec

#随机生成参数
def _argu_generator(n,wc_range):
    capcity = random.randint(1,wc_range)
    w_list = [random.randint(1,wc_range) for i in xrange(n)]
    v_list = [random.randint(1,100) for i in xrange(n)]
    return w_list,v_list,capcity,n
import time
import matplotlib.pyplot as pl

def main():
    n_list = [100,1000,10000]
    wc_range_list = [100,1000,10000]
    dp_time = {}
    app_time = {}
    for n in n_list:
        for wc_range in wc_range_list:
            data = _argu_generator(n,wc_range)
            w_list = data[0]
            v_list = data[1]
            capcity = data[2]
            n = data[3]
            dp_start = time.time()
            print "物品个数：%s"%n
            print "背包容量：%s"%capcity
            print "动态规划结果：%s"%_dp_kp(w_list,v_list,capcity,n)[n][capcity]
            dp_end = time.time()
            dp_time[(n,wc_range)] = dp_end - dp_start

            app_start = time.time()
            print "近似算法结果：%s"%_approx_kp(w_list,v_list,capcity,n)[n][capcity]
            app_end = time.time()
            app_time[(n,wc_range)] = app_end - app_start
    print app_time
    print dp_time
    x = [item[0][0] * item[0][1] for item in dp_time.items()]
    dp_y = [item[1] for item in dp_time.items()]
    app_y = [item[1] for item in app_time.items()]
    pl.figure()
    pl.subplot(121)
    pl.title('DynamicProgramming_time')
    pl.plot(x,dp_y)

    pl.subplot(122)
    pl.title('Approximate_time')
    pl.plot(x,app_y)

    pl.show()


main()




#test = _dp_kp(w_list,v_list,capcity,n)
#test = _approx_kp(w_list,v_list,capcity,n)
#print test
    


