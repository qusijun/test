/*************************************************************************
	> File Name: permute.c
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 五  4/ 8 12:10:42 2016
 ************************************************************************/

#include<stdio.h>

int n = 0;  

void swap(int *a, int *b) 
{     
    int m;     
    m = *a;     
    *a = *b;     
    *b = m; 
}  
void perm(int list[], int k, int m) 
{     
    int i;     
    if(k > m)     
    {          
            for(i = 0; i <= m; i++)             
                printf("%d ", list[i]);         
            printf("\n");         
            n++;     
        }     
    else     
    {         
            for(i = k; i <= m; i++)         
            {             
                        swap(&list[k], &list[i]);             
                        perm(list, k + 1, m);             
                        swap(&list[k], &list[i]);         
                    }     
        } 
} 
int main() 
{     
    int list[] = {1, 2, 3};     
    perm(list, 0, 2);     
    printf("total:%d\n", n);     
    return 0; 
}  
