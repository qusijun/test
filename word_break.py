#!/usr/bin/env python
# coding=utf-8
# File Name: word_break.py
# Author:qusijun 
# Mail:wl_lian@yahoo.com
# Created Time: 一  2/22 17:20:56 2016
##############################################################
def word_break(str,word_dict):
    arr = [0 for i in range(len(str)+1)]
    arr[0] = 1

    for i in range(len(str)):
        if not arr[i]:
            continue

        for word in word_dict:
            end = i + len(word)
            
            if (end > len(str)):
                continue

            if (arr[end]):
                continue

            if(str[i:end] == word):
                arr[end] = 1

    return arr[len(str)];

print word_break("leetcode",['leet','code'])


