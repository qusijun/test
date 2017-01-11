/*************************************************************************
	> File Name: str.c
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 日  2/28 12:57:28 2016
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    char str[] = {"a"};
    char *test = "woshi";
    //test[0] = 'u';
    str[0] = 'u';
    printf("%ld\n",sizeof("a"));
    printf("%ld\n",sizeof(char));
    printf("%ld\n",sizeof(str)/sizeof(char));
    //printf("%s",test);
    printf(str);
    return 0;
}
