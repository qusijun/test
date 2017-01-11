/*************************************************************************
	> File Name: template.cpp
	> Author: qusijun
	> Mail: wl_lian@yahoo.com
	> Created Time: 日 10/11 12:47:09 2015
 ************************************************************************/

#include<iostream>
using namespace std;
template <typename elemType>
void display_message(const string &msg,const vector<elemType> &vec)
{
    cout << msg;
    for (int i = 0; i < vec.size(); i++)
    {
        elemType t = vec[i];
        cout << t << ' ';
    }
}
