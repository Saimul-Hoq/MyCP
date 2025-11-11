#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double sum=0, count=1, n;
    cout<<"Enter the till which you want to continue: ";
    cin>>n;
    while(count<=n)
    {
        sum=sum+ 1/pow(count,count);
        count++;
    }
    cout<<"The sum of the series is "<<sum<<endl;
    return 0;
}