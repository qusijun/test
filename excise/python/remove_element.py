#!/usr/bin/env python
# coding=utf-8

#利用两个游标i和j，i一直递增，j是遇到数组中等于value的值时候就暂停递增。
#最终返回的j就是删除指定元素之后的数组长度
def remove_element(li,value):
    i = j = 0
    for i in range(len(li)):
        if li[i] == value:
            continue
        li[j] = li[i]
        #j++
        j= j+1
    return j


li = [1,2,2,3,2,4]
print remove_element(li,2)


    
 
