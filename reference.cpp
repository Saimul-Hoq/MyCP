#include<iostream>
using namespace std;
int main()
{
    int a=1024;
    int &b=a;
    cout<<"A="<<a<<" "<<"B="<<b<<endl;
    a=111;
    cout<<"A="<<a<<" "<<"B="<<b<<endl;
    double d=3.14;
    double &c=d;
    cout<<"D="<<d<<" "<<"C="<<c<<endl;
    d=55.5678;
     cout<<"D="<<d<<" "<<"C="<<c<<endl;
    return 0;

}