/*************************************************************************
	> File Name: remove_value.c
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 日  1/31 22:50:16 2016
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int arr[] = {1,2,2,3,1,4,3,5,2,1};
    int value = 2;
    
    int i,j;
    int len = sizeof(arr) / sizeof(int);

    for(i = 0,j = 0; i < len; i++)
    {
        if (arr[i] == value)
            continue;
        arr[j] = arr[i];
        j++;
    }
    
    for( i = 0;i < j; i++ )
        printf("%d,",arr[i]);
    printf("j = %d",j);
}
