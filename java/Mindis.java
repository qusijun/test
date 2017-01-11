/*************************************************************************
	> File Name: Mindis.java
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 五  3/ 4 17:34:27 2016
 ************************************************************************/
import java.util.Scanner;
import java.lang.Math;
public class Mindis
{
    public static void main(String[] args)
    {
        String sentence = "what is your name my name cai bu shi is lian";
        String target1 = "is";
        String target2 = "name";
        String[] sentence_arr = sentence.split(" ");


        int p,q;
        int temp_dis = Integer.MAX_VALUE;
        p = q = -1;
        for (int i = 0;i<sentence_arr.length;i++)
        {
            if (target1.equals(sentence_arr[i]))
            {
                p = i;
            }

            if (target2.equals(sentence_arr[i]))
            {
                q = i;
            }
            if (p >-1 && q > -1 && Math.abs(p-q) < temp_dis)
            {
                
                temp_dis = Math.abs(p-q);
            }

        }
        System.out.println(temp_dis);
        


    }
}

