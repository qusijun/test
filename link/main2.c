/*************************************************************************
	> File Name: main2.c
	> Author: qusijun
	> Mail: wl_lian@yahoo.com
	> Created Time: 日  8/16 17:05:10 2015
 ************************************************************************/

#include<stdio.h>
#include "vector.h"

int x[2] = {1,2};
int y[2] = {3,4};
int z[2];

int main()
{
    addvec(x,y,z,2);
    printf("z = [%d %d\n]",z[0],z[1]);
    return 0;
}
