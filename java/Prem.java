/*************************************************************************
	> File Name: Prem.java
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 四  3/ 3 10:13:43 2016
 ************************************************************************/

public class Prem
{
    StringBuilder sb = new StringBuilder();
    public static void main(String[] args)
    {
        int arr[] = {1,2,4,4};
        perm(arr,0,3);
        
    }
    public static void swap(int[] arr,int a,int b)
    {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
    public static boolean can_swap(int[] arr,int a,int b)
    {
        for(int i = a;i<b;i++)
        {
            if (arr[b] == arr[i])
                return false;
        }
        return true;
    }

    public static void perm(int[] arr,int start,int end)
    {
        
        if (start == end)
        {
            for(int i = 0;i <= end;i++)
            {
                System.out.print(arr[i]+",");
            }
            System.out.println();

            
        }
        else
        {
            for (int i = start;i<=end;i++)
            {
                if (can_swap(arr,start,i))
                //if (arr[start] != arr[i])
                {
                    swap(arr,start,i);
                    perm(arr,start+1,end);
                    swap(arr,start,i);
               }
                    
            }
                
        }
    }
}
