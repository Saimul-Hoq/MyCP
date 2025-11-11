#include<iostream>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n, num;
        long long asum, sum=0;
        cin>>n;

        asum = (n*(n+1))/2;

        for(long long i=1; i<n; i++)
        {
            cin>>num;
            sum=sum+num;
        }
        
        cout<<asum-sum<<endl;

    }

    return 0;
}