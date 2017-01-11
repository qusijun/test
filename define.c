/*************************************************************************
	> File Name: define.c
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 六  3/ 5 11:36:23 2016
 ************************************************************************/

#include<stdio.h>
int a;
int b;
#ifdef bb
b = 1;
#else
b = 0;
#endif

#ifdef aa
a = 1;
#else
a = 0;
#endif
int main(void)
{
    printf("%d,%d",a,b);
    return 0;
}
