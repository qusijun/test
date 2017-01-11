/*************************************************************************
	> File Name: quicksort.c
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 五  2/26 17:18:14 2016
 ************************************************************************/

#include<stdio.h>

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[],int start,int end)
{
    int i = start;
    int j = end;
    int pivot = arr[0];
    
    int count = 0;

    while (i < j)
    {

        while (i < j && arr[j] > pivot)
            j--;
        while (i < j && arr[i] <= pivot)
        {
            i++;
        }
       if (i < j) 
            swap(&arr[i],&arr[j]);
    }
    swap(&arr[j],&arr[0]);
    return i;
}

int main(void)
{
    int arr[] = {4,1,2,1,3,5,2,7,1};
    int mid = partition(arr,0,8);
    int i;
    for (i = 0;i < 9;i++)
        printf("%d,",arr[i]);
    //printf("%d",mid);
    return 0;
}
