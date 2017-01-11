/*************************************************************************
	> File Name: fib.cpp
	> Author: qusijun
	> Mail: wl_lian@yahoo.com
	> Created Time: 日  9/13 10:36:16 2015
 ************************************************************************/

#include<iostream>
using namespace std;
bool fibo_elem(int ,int &);
bool print_sequence(int );

int main()
{
    bool if_next = true;
    char ans;
    int pos;
    int elem;
    //cout<<"please enter a postion :";
    //cin>>pos;
    while (if_next)
    {
        cout << "please enter a positon :";
        cin >> pos;
        
        if (fibo_elem(pos,elem))
        {
            cout << "element # "<< pos << " is " << elem <<endl;
        }
        else 
        {
            cout << "sorry . could not calculate element # "<< pos <<endl;
        }


        print_sequence(pos);
        cout << "would you like to going on ? (Y/N): ";
        cin >> ans;

        if (ans == 'N' || ans == 'n')
            if_next = false;


    }

    //int elem;
    //if (fibo_elem(pos,elem))
    //    cout<<"element # "<<pos<<" is "<<elem<<endl;
    //else
    //   cout<<"sorry.Could not calculate element # "<<pos<<endl;
    //print_sequence(pos);
}
bool fibo_elem(int pos,int &elem)
{
    if(pos<=0 || pos>=1024)
    {
        elem = 0;
        return false;
    }

    elem = 1;
    int n_1 = 1,n_2 = 1;

    for (int i = 3;i<=pos;i++)
    {
        elem = n_1 + n_2;
        n_2 = n_1;
        n_1 = elem;
    }
    return true;
}

bool print_sequence(int pos)
{
    if (pos<=0 || pos > 1024)
    {
        cerr << "invalid postion: "<< pos << "-- cannot handle request!\n";
        return false;
    }

    cout << "The Fibonacci Sequence for "<< pos <<" postion : \n\t";
    //所有位置都会印出1 1，只有pos==1除外
    switch (pos)
    {
        default:
        case 2:
            cout << "1 ";
        case 1:
            cout << "1 ";
            break;
    }

    int elem;
    int n_2 =1 ,n_1 = 1;
    for (int i = 3; i<=pos; i++)
    {
        elem = n_2 + n_1;
        n_2 = n_1;
        n_1 = elem;

        cout<< elem << (!(i % 10) ? "\n\t": " ");
        
    }
    cout << endl;
}
