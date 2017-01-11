/*************************************************************************
	> File Name: thread.c
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 三  1/27 21:41:20 2016
 ************************************************************************/

#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

void *print_hello_world(void *tid)
{
    printf("Hello World.Greeting from thread %d0",tid);
    pthread_exit(NULL);
}

//void *test()
//{
//   int a = 1;
//    return &a;
//}

int main(void)
{
//    printf("test():%p",test());
    int status,i;
    
    return 0;

}
