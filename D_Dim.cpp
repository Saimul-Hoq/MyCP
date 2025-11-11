#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;

    if(k<=59)
    {
        if(k<=9)
        {
            cout<<"21:0"<<k<<endl;
        }
        else
        {
            cout<<"21:"<<k<<endl;
        }
    }
    else if(k==60)
    {
        cout<<"22:00"<<endl;
    }
    else
    {
        k = k-60;
        if(k<=9)
        {
            cout<<"22:0"<<k<<endl;
        }
        else
        {
            cout<<"22:"<<k<<endl;
        }
    }
    
    
    return 0;
}