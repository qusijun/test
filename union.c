/*************************************************************************
	> File Name: union.c
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 一  3/ 7 10:43:39 2016
 ************************************************************************/

#include<stdio.h>
typedef union
{
    char a;
    int b;
    int c;
}Union;

int main(void)
{
    Union d;
    d.a = 'H';
    d.b = 10;
    d.c = 12;
    printf("%c\t%d\t%d\t",d.a,d.b,d.c);
    return 0;
}
