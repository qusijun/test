/*************************************************************************
	> File Name: s.c
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 五  3/ 4 13:47:38 2016
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    struct Test
    {
        int a;
        char b;
        int c;
    };
    struct Test test;
    printf("%ld,",sizeof(struct Test));
    printf("%ld",sizeof(test));
    return 0;
}
