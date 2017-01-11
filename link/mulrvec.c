/*************************************************************************
	> File Name: mulrvec.c
	> Author: qusijun
	> Mail: wl_lian@yahoo.com
	> Created Time: 日  8/16 13:47:29 2015
 ************************************************************************/

#include<stdio.h>
void multvec(int *x,int *y,int *z,int n)
{
    int i;
    for (i = 0; i < n; i++)
        z[i] = x[i] * y[i];
}
