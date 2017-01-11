/*************************************************************************
	> File Name: remove_duplicates.c
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 四  2/18 10:30:59 2016
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    struct Node
    {
        Node *a;
    };

    int arr[] = {1,1,1,2,2,3};
    int len = sizeof(arr) / sizeof(int);
    
    int i,j;
    for (i = 1,j = 0; i < len; i++)
    {
        if (arr[j] != arr[i])
        {
            arr[++j] = arr[i];
        }
    }
    printf("new len = %d",j+1);

    return 0;
}
