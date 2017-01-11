/*************************************************************************
	> File Name: min_rataed.c
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 日  2/28 13:14:02 2016
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int arr[][2] = {{1,2},{3,4}};
    int i;
    int *p = &arr[0][0];
    for (i = 0;i<4;i++)
    {
        printf("%d,",*(p+i));
    }
    char a = 'a';
    char b = 'c';
    printf("%d",'a'<'c');
    return 0;
}
