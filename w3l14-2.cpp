#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double sum=1, fact=1, i=2, count=1,cnt=2, x, n, p;
    cout<<"To know the value of this series '1 - X^2/2! + X^4/4!-....' : "<<endl;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the term till which yo want to continue the series: ";
    cin>>n;
    while(cnt<=n)
    {
        while(count<=i)
        {
        fact=fact*count;
        count++;
        }
        p=pow(x,i)/fact;
        sum=sum-pow(-1,cnt)*p;
        i=i+2;
        count=1;
        fact=1;
        cnt++;
    }
    cout<<"The sum is "<<sum<<endl;
    return 0;
}