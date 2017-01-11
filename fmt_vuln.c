/*************************************************************************
	> File Name: fmt_vuln.c
	> Author: qusijun
	> Mail: wl_lian@yahoo.com
	> Created Time: 五  8/21 13:09:53 2015
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv)
{
    char text[1024];
    static int test_val = -72;

    if(argc < 2)
    {
        printf("Usage: %s <text to print>\n",argv[0]);
        exit(0);
    }

    strcpy(text,argv[1]);

    printf("The right way:\n");
    printf("%s",text);

    printf("\nThe wrong way:\n");
    printf(text);

    printf("\n");

    printf("[*] test_val @ 0x%08x = %d 0x%08x\n",&test_val,test_val,test_val);
    exit(0);
}

