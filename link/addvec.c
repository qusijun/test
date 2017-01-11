/*************************************************************************
	> File Name: addvec.c
	> Author: qusijun
	> Mail: wl_lian@yahoo.com
	> Created Time: 日  8/16 13:46:13 2015
 ************************************************************************/

#include<stdio.h>
void addvec(int *x,int *y,int *z,int n)
{
    int i;
    for (i=0; i < n; i++)
    {
        z[i] = x[i] + y[i];
    }
}
