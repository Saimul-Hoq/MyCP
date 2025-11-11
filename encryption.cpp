#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    long num;
    cout<<"Enter encrypted messeage: ";
    cin>>num;

    long a=1; 
    int cnt=0;

    while(a!=0)
    {
        cnt++;
        a=num/10;
    }
    cout<<cnt;

    return 0;


}