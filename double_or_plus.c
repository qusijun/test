/*************************************************************************
	> File Name: double_or_plus.c
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 日  2/ 7 21:26:22 2016
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int opt(int n)
{
    int count = 0;
    while ( n > 1)
    {

        if (n%2 == 0)
        {
            n/=2;
            count++;

        }
        else
        {
            n-=1;
            count++;
        }
    }
    return count;

}

int main(void)
{
    printf("%d",opt(2013));
    return 0;
}
