/*************************************************************************
	> File Name: head.c
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 日  2/21 19:35:43 2016
 ************************************************************************/

#include<stdio.h>
typedef py_ssize_t (*lenfunc)(int *);
py_ssize_t a;
struct node
{
    lenfunc a;
};
