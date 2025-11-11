#include<iostream>
using namespace std;
int main()
{
    long long sum1, sum2, n, p;
    cin>>n;
    sum2= (n*(n-1))/2;
    if(long long i=1; i<n; i++)
    {
        cin>>p;
        sum1+=p;
    }
    cout<<sum2-sum1;
    return 0;
}