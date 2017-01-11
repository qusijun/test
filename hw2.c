/***************************************************************************
 * 
 * Copyright (c) 2017 wllian Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file hw2.c
 * @author qusijun(wl_lian@yahoo.com)
 * @date 2017/01/08 12:28:34
 * @version $Revision$ 
 * @brief 
 *  
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */

fun2(int x)



{



        int y=0,z=0;



            ++y;



                ++z;



                    return x+y+z;



}
fun1(char x)



{



        int y=0;



            int z=2;



                y++;



                    z++;



                        return fun2(x+y+z);



}

main()



{



        int x=300;



            printf("%d\n",fun1(x));



}






