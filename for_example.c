/*************************************************************************
	> File Name: for_example.c
	> Author: qusijun
	> Mail: wl_lian@yahoo.com
	> Created Time: 五  8/21 10:36:38 2015
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>
int main()
{
    char string[7] = "sample";
    int A = -72;
    unsigned int B =  31337;
    int count_one,count_two;

    printf("[A] Dec:%d,Hex:%x,unsigned:%u\n",A,A,A);
    printf("[B] Dec:%d,Hex:%x,unsigned:%u\n");
    printf("[field width on B] 3: '%3u',10 :'%010u','%08u'\n",B,B,B);
    printf("[string] %s Address %08x\n",string,string);

    printf("count_one is located at :%08x\n",&count_one);
    printf("count_two is located at :%08x\n",&count_two);

    printf("The number of bytes written up to this point X%n is being stored in count_one,and the number of bytes up to here X%n is being stored in count_two.\n",&count_one,&count_two);
    
    printf("count_one:%d\n",count_one);
    printf("count_two:%d\n",count_two);

    printf("A is %d and is at %08x. B is %u at %08x.\n",A,&A,B);

    exit(0);

}
