/*************************************************************************
	> File Name: test.c
	> Author: qusijun
	> Mail: wl_lian@yahoo.com
	> Created Time: 二 10/27 10:29:57 2015
 ************************************************************************/

#include<stdio.h>
#include<memory.h>
#include<stdlib.h>
#include"test.h"

int* return_test();
void func()
{
    static int a = 1;
    a++;
    printf("a = %d\n",a);
    //free(&a);
}
int main(void)
{
    connect(1);
    int *tmp= return_test();
    printf("%p",tmp);
    return 0;
}

void connect(int x)
{
    func();
    func();
}

int* return_test()
{
    int *a ;
    int b =2;
    a = &b;
    return a;
}
