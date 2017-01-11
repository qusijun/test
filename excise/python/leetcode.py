#!/usr/bin/env python
# coding=utf-8
def find_peak_element(li,left,right):
    mid = (left + right) / 2
    print mid
    if (mid == 0 and li[mid]>=li[mid+1]) or (mid == right and li[mid] >= li[mid-1]) or (li[mid] >= li[mid+1] and li[mid] >= li[mid-1]):
        return li[mid]
    elif li[mid] >= li[mid+1] :
        return find_peak_element(li,left,mid)
    else :
        return find_peak_element(li,mid,right)

li = [1,4,3,7,2,8]

print find_peak_element(li,0,5)
