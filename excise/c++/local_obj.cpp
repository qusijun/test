/*************************************************************************
	> File Name: local_obj.cpp
	> Author: qusijun
	> Mail: wl_lian@yahoo.com
	> Created Time: 一  9/14 20:56:33 2015
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

vector<int> fibon_seq(int size)
{
    if (size <= 0 || size >= 1024)
    {
        cout << "warning:fibon_seq(): " << size << " not supported --resetting to 8\n";
        size = 8;
    }

    vector<int> elem(size);
    for (int i = 0; i < size; i++)
    {
        if (i == 0 || i == 1 )
            elem[i] = 1;
        else 
            elem[i] = elem[i-1] + elem[i-2];
    }
    return elem;
}

int main()
{
    vector<int> result = fibon_seq(4);
    return 0;
}
