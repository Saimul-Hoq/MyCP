#include<iostream>
using namespace std;
int main()
{
    int ival=50;
    int *p=&ival;
    cout<<"ival= "<<ival<<" , "<<"p= "<<p<<" , "<<"*p= "<<*p<<endl;

    *p=51;
    cout<<"New ival= "<<ival<<" , "<<"New p= "<<p<<" , "<<"New *p= "<<*p<<endl;

    ival=52;
    cout<<"New ival= "<<ival<<" , "<<"New p= "<<p<<" , "<<"New *p= "<<*p<<endl;
    
    //Null Pointer:
    int *pt = nullptr;
    int *pt3 = 0;


    return 0;

}