#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long r,a,b,d, sum=0, num=1;
        cin>>r>>a>>b>>d;

        for(long long i=1; num<=r; i++)
        {
            num = a*i;
            sum+=num;
            sum = sum%d;
        }
        num=1;
        for(long long i=1; num<=r; i++)
        {
            num = b*i;
            sum+=num;
            sum = sum%d;
        }

        cout<<sum<<endl;
    }
    
    
    return 0;
}