/*************************************************************************
	> File Name: AddBinary.java
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 六  3/ 5 20:25:18 2016
 ************************************************************************/

public class AddBinary
{
    public static void main(String[] args)
    {
        String a = "11";
        String b = "11";
    
        char[] a_arr = a.toCharArray();
        char[] b_arr = b.toCharArray();
        char[] n_arr = new char[a_arr.length > b_arr.length?a_arr.length:b_arr.length];
        
        if (a_arr.length > b_arr.length)
        {
            int dis = a_arr.length - b_arr.length;
            for (int i= b_arr.length -1;i>=0;i--)
                n_arr[i+dis] = b_arr[i];
            for (int j = dis-1;j>=0;j--)
                n_arr[j] = 0 + '0';
        }
        else
        {
            int dis = b_arr.length - a_arr.length;
            for (int i = a_arr.length-1;i>=0;i--)
                n_arr[dis+i] = a_arr[i];
            for (int j = dis-1;j>=0;j--)
                n_arr[j] = 0 + '0';
        }
        StringBuilder sb = new StringBuilder();
        int carry = 0;
        int digit = 0; 

        for (int i=n_arr.length-1;i>=0;i--)
        {
            if (a_arr.length > b_arr.length)
            {
               int temp = carry + (n_arr[i]-'0') + (a_arr[i] - '0');
               System.out.println(carry);
               //System.out.println(temp);
               carry = temp/2;
               temp %=2;
               sb.append(temp);
            }
            else{
                int temp = carry + (n_arr[i] - '0') + (b_arr[i] - '0');
                carry = temp/2;
                temp %= 2;
                
                sb.append(temp);
            }

        }
        sb.append(carry);
        System.out.println(sb.toString());
    }
}
