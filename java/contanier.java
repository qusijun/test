/*************************************************************************
	> File Name: contanier.java
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 二  3/ 8 15:31:37 2016
 ************************************************************************/

public class contanier
{
    public static void main(String[] args)
    {
        int[] arr = {3,2,4,1,1};
        int l = 0;
        int r = 4;
        int max = 0;
        while (l < r)
        {
            int temp = min(arr[l],arr[r]) * (r-l);
            System.out.println(temp);
            if (temp > max)
                max = temp;
            if (arr[l] > arr[r])
                r--;
            if (arr[l] <= arr[r])
                l++;
            
        }
        System.out.println(max);
    }
    public static int min(int a,int b)
    {
        return a>b?b:a;
    }
    
}
