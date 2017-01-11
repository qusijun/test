/*************************************************************************
	> File Name: GasStation.java
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 三  3/ 2 17:57:56 2016
 ************************************************************************/

public class GasStation
{
    public static void main(String[] args)
    {
        int gas[] = {};
        int cost[] = {};

        int sumRemain = 0;
        int totalRemain = 0;

        int start = 0;

        for (int i = 0; i < gas.length; i++)
        {
            /*int remain = gas[i] - cost[i];
            sumRemain += remain;
            if (sumRemain < 0)
            {
               remain = 0;
               sumRemain = 0;
               start = i;
            }
            */
            int remain = gas[i] - cost[i];
            if (sumRemain >= 0)
            {
                sumRemain += remain;
            }
            else
            {
                sumRemain = remain;
                
                start = i;
            }
            totalRemain += remain;
            
        }
        if (totalRemain >= 0) {
            System.out.println("from site:");
        }
        else{
            System.out.println("不可能");
        }
    }
}
