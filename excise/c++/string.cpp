/*************************************************************************
	> File Name: string.cpp
	> Author: qusijun
	> Mail: wl_lian@yahoo.com
	> Created Time: 五  9/11 17:07:23 2015
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    //C-style 字符串
    char user_name[1024];
    cin>>user_name;
    cout<<user_name;
    cout<<strlen(user_name);
}

