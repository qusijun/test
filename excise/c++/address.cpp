/*************************************************************************
	> File Name: address.cpp
	> Author: qusijun
	> Mail: wl_lian@yahoo.com
	> Created Time: 一 10/26 14:19:51 2015
 ************************************************************************/

#include<iostream>
using namespace std;
char *function1();
const char *function2();
int main()
{
    int i = 1;
    int& r = i;
    int x = i;
    //cout << &i << endl;
    //cout << &r << endl;
    //cout << &x << endl;
    function1()[1] = 'a';
    function2()[1] = 'a';
    return 0;
}


char *function1()
{
    return "some text";
}

const char *function2()
{
    return "some text";
}


