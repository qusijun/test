/*************************************************************************
	> File Name: max_and_min.c
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 四  2/ 4 11:57:38 2016
 ************************************************************************/

#include<stdio.h>

void sort(int arr[],int n)
{
    int i;
    int max,min;
    max = 0;
    min = 0;
    
    if (arr[0]>arr[1])
    {
        max = arr[0];
        min = arr[1];
    }
    else
    {
        max = arr[1];
        min = arr[0];
    }

    for (i = 2; i+1 < n; i+=2)
    {
        int temp_max;
        int temp_min;
        if (arr[i]>arr[i+1])
        {
            temp_max = arr[i];
            temp_min = arr[i+1];
        }
        else
        {
            temp_max = arr[i+1];
            temp_min = arr[i];
        }
        if (max < temp_max)
            max = temp_max;
        if (min > temp_min)
            min = temp_min;
    }
    if (n%2)
    {
        if (max < arr[n-1])
            max = arr[n-1];
        if (min > arr[n-1])
            min = arr[n-1];
    }
    printf("max = %d,min = %d,n = %d",max,min,n);
}

int main(void)
{
    int a[] = {1,2,4,5,3,6,6,2,7,3,8};
    sort(a,sizeof(a)/sizeof(int));
    
    return 0;
}
