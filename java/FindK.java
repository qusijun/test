/*************************************************************************
	> File Name: FindK.java
	> Author:qusijun
	> Mail:wl_lian@yahoo.com
	> Created Time: 三  3/ 2 19:23:39 2016
 ************************************************************************/

public class FindK {
    public void swap(int[] arr,int a,int b) {
        System.out.println("tset");
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;

    }
    public int findk(int[] arr,int k,int start,int end) {
        int pivot = arr[end];
        int left = start;
        int right = end;
        int len = end - start ;
        while (true) {
            while (left < right && arr[left] < pivot)
                left++;
            while (left < right && arr[right] >= pivot)
                right--;
            if (left == right)
                break;
            swap(arr,left,right);
        }
        //System.out.println(left);
        swap(arr,left,end);

        if (k == left + 1)
            return arr[left];
        else if (k < left + 1 )
            return findk(arr,k,start,left-1);
        else
            return findk(arr,k,left+1,end);
    }
    public void partition(int[] arr,int left,int right) {
        int start = left;
        int pivot = arr[left];
        int i = left - 1;
        for (int j = left; j<right; j++) {
        }
    }
    public static void main(String[] args) {
        FindK f = new FindK();
        int[] arr = {3,7,1,5,6,4};
        int start = 0;
        int end = 5;
        int k = 2;
        k = arr.length - 2+1;
        System.out.println(f.findk(arr,k,start,end));
    }
}
