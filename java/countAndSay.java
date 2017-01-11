/*************************************************************************
	> File Name: countAndSay.java
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 三  3/ 2 17:46:04 2016
 ************************************************************************/

public class countAndSay
{
    public static void main(String[] args)throws Exception
    {
        String result = new countAndSay().count_and_say(4);
        System.out.println(result);
    }
    private String count_and_say(int n)
    {
        if (n <= 0)
        {
            return null;
        }

        String result = "1";
        int i = 1;

        while ( i < n )
        {
            StringBuilder sb = new StringBuilder();
            int count = 1;
            for (int j = 1;j < result.length();j++)
            {
                if (result.charAt(j) == result.charAt(j-1))
                {
                    count++;

                }
                else
                {
                    sb.append(count);
                    sb.append(result.charAt(j-1));
                    count = 1;
                }
            }
            sb.append(count);
            sb.append(result.charAt(result.length()-1));
            result = sb.toString();
            i++;
        }
        return result;
    }
}
