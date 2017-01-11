def find(li,left,right):
    mid = (left + right)/2
    #print mid
    if li[mid] == mid:
        print mid
    elif li[mid] <= mid:
        find(li,mid,right)
    elif li[mid] >= mid:
        find(li,left,mid)
 
li = [-7,-5,-4,-2,1,5,6,9,11]
left = 0
right = len(li)-1
find(li,left,right)       

