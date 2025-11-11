#include<iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"Enter the numbers which you want to do summation: "<<endl;
    while(cin>>n)
    {
        sum+=n;
    }
    cout<<"The sum is "<<sum<<endl;
    return 0;
}