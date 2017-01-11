/*************************************************************************
	> File Name: fibo.cpp
	> Author: qusijun
	> Mail: wl_lian@yahoo.com
	> Created Time: 二  9/29 22:41:57 2015
 ************************************************************************/

#include<iostream>
using namespace std;
const vector<int>* fibon_seq(int size)
{
    const int max_size = 1024;
    static vector<int> elems;

    //if (size <=0 || size >= max_size)
    //{
    //    cout << "fibon_seq(): oops! invalid size: " << size << " -- can't fullfill requeset.\n ";
    //    return 0;
    //}

    if (!is_size_ok(size))
    {
        return 0;
    }

    for (int i = 0; i < size; i++)
    {
        if (size == 1 || size == 2)
            elems.push_back(1);
        else elems.push_back(elems[i-1]+elems[i-2])
    }
    return &elems;
}

bool is_size_ok(int size)
{
    const int max_size = 1024;
    if (size < 0 || size > max_size)
    {
        cerr << "sorry! the size is not suitable!";
        return false;
    }
    return true;

    
}

bool fibo_elem(int pos,int &elem)
{
    const vector<int> *pesq = fibon_seq(pos);
    if(!pesq)
    {
        elem = 0;
        return false;
    }

    elem = pesq[pos-1];
    return true;
}

