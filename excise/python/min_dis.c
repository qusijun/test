/*************************************************************************
	> File Name: min_dis.c
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 五  2/ 5 11:06:00 2016
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int min_dist(int arr[],int num1,int num2,int size)
{
    int min_distance = INT_MAX;
    int i,num_pos1,num_pos2;
    num_pos1 = num_pos2 = -1;

    for( i = 0; i < size; i++ )
    {
        if (arr[i] == num1)
        {
            num_pos1 = i;
            if (min_distance > num_pos1 - num_pos2)
                min_distance = num_pos1 - num_pos2;
        }

        if (arr[i] == num2)
        {
            num_pos2 = i;
            if (min_distance > num_pos2 - num_pos1)
                min_distance = num_pos2 - num_pos1;
        }
    }
    return min_distance;
    
}

int main(void)
{
    int data[] = {1,2,3,2,7,8,7};
    printf("%d",min_dist(data,2,7,sizeof(data)/sizeof(int)));
    return 0;
}
