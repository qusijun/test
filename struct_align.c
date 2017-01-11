/*************************************************************************
	> File Name: struct_align.c
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 四  2/ 4 11:34:52 2016
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    int double_len = sizeof(double);
    
    #pragma pack(4)
    struct my_struct
    {
        char a;
        double b;
        char c;
    };
    #pragma pack()
    printf("double length = %d\n",double_len);
    printf("struct length = %ld\n",sizeof(struct my_struct));


    struct my_struct2
    {
        char a[11];
        int b;
        char c;

    };
    printf("struct2 length = %ld\n",sizeof(struct my_struct2));

    return 0;
}
