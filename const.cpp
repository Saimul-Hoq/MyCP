#include<iostream>
using namespace std;
int main()
{
    int a=21;
    const int cnt=a;
    int b=cnt;
    cout<<"a= "<<a<<" , "<<"cnt= "<<cnt<<" , "<<"b= "<<b<<endl;
    return 0;
}