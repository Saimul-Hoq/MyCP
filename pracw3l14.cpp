#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double sum=1, count=1, cnt=2, i=2, fact=1, x, n, p;
    cout<<"To know the value of the seires-"<<endl;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the number till which you want to continue: ";
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
        count=1;
        fact=1;
        cnt++;
        i=i+2;
    }
    cout<<"The sum of the series is "<<sum<<endl;
    return 0;
}