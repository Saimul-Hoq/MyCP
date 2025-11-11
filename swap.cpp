#include<iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout<<"Enter any two numbers: "<<endl;
    cin>>n1>>n2;
    swap(n1, n2);
    cout<<n1<<" "<<n2<<endl;
    return 0;
}