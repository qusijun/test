/*************************************************************************
	> File Name: static.c
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 四  3/ 3 16:20:56 2016
 ************************************************************************/

#include<stdio.h>
void func()
{
    static int b;
    printf("%p\n",&b);
}

int main(void)
{
    static int b = 10;
    func();
    printf("%p",&b);
    return 0;
}
