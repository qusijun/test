/*************************************************************************
	> File Name: display.cpp
	> Author: qusijun
	> Mail: wl_lian@yahoo.com
	> Created Time: 二  9/15 12:16:45 2015
 ************************************************************************/

#include<iostream>
#include<fstream>
#include<ostream>
#include<vector>
#include "NumericSeq.h"
using namespace std;
void display(vector<int> &vec,ostream &os)
{
    for (int i = 0; i < vec.size(); i++)
    {
        os << vec[i] << ' ';
    }

    os << endl;
}

int main()
{
    int ia[8] = {8,32,14,5,63};
    vector<int> vec(ia,ia+8);
    ofstream ofil("data.txt");
    display(vec,ofil);
    return 0;
}
