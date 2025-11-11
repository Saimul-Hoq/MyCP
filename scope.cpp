#include<iostream>
using namespace std;
int a=30;
int main()
{
    int b=2;
    cout<<a<<" "<<b<<endl;

    int a=12;
    cout<<a<<" "<<::a<<" "<<b<<endl;

    return 0;
}