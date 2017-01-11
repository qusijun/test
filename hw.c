/***************************************************************************
 * 
 * Copyright (c) 2017 wllian Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file hw.c
 * @author qusijun(wl_lian@yahoo.com)
 * @date 2017/01/08 12:21:51
 * @version $Revision$ 
 * @brief 
 *  
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */

#include "stdio.h"

unsigned short *sum(unsigned char a, unsigned char b)

{

        unsigned short s = 0;

            s = a + b;

                return &s;

}

int main()

{

        unsigned short *p=NULL;

            unsigned char a=1, b=2;

                p = sum(a, b);

                    printf("%u+%u", a, b);

                    printf("=%u\n", *p);

                        return 0;

}



