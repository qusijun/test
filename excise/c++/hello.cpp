/*************************************************************************
	> File Name: hello.cpp
	> Author: qusijun
	> Mail: wl_lian@yahoo.com
	> Created Time: 五  9/11 10:42:30 2015
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string last_name;
    string first_name;

    cout<<"please input your last name: ";
    cin >> last_name;
    //cout<<"Hello,"<<user_name<<"and goodbye!"<<endl;
    cout<<'\n';
    cout<<"please input you first name: ";
    cin>>first_name;

    cout<<'\n';
    cout<<"Hello,";
    cout<<first_name;
    cout<<last_name;
    cout<<"...and goodbye!";
    cout<<'\n';
    return 0;
}
