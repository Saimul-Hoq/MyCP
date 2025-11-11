#include<iostream>
using namespace std;
int main()
{
    int i=10;
    const int &r1=i;
    double j=3.14;
    const int &r2=j;
    cout<<"r1= "<<r1<<" , "<<"r2= "<<r2<<endl;
    
    return 0;

}