/*************************************************************************
	> File Name: reduce_to_one.c
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 四  2/ 4 17:50:51 2016
 ************************************************************************/

#include<stdio.h>
int func(int n)
{
    int i = n;
    int count = 0;
    while (i > 1)
    {
        if (i%2)
        {
            i--;
            count++;
        }
        else 
        {
            count++;
            i/=2;
        }
    }
    return arr[n];
}

int main(void)
{
    int n = 7;
    printf("%d",func(n));

    return 0;
}
