/*************************************************************************
	> File Name: remove_dupicates2.c
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 二  2/16 11:05:39 2016
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int arr[] = {1,1,1,2,2,3};
    int len = sizeof(arr) / sizeof(int);

    int i,j;
    int count = 0;
    for ( i = 0,j = 0; i < len; i++)
    {
        if (arr[j] == arr[i])
        {
            count++;
            if(count )
        }
    }
}
