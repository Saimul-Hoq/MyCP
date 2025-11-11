#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,q, l, r;
    cin>>t>>q;
    while(q--)
    {
        cin>>l>>r;
        unsigned long long sumr, suml, n;
        n=r;
        if(n%3==0)
        {
            unsigned long long num = n/3;
            sumr = ((num*(num+1))/2)*3;
        }
        else
        {
            long long res = n/3;
            int rem = n%3;
            long long sumex=res+1;
            unsigned long long num = (n-rem)/3;
            sumr = ((num*(num+1))/2)*3;
            while(rem--)
            {
                sumr+=sumex;
            }
        }

        n=l-1;
        if(n%3==0)
        {
            long long num = n/3;
            suml = ((num*(num+1))/2)*3;
        }
        else
        {
            long long res = n/3;
            int rem = n%3;
            long long sumex=res+1;
            long long num = (n-rem)/3;
            suml = ((num*(num+1))/2)*3;
            while(rem--)
            {
                suml+=sumex;
            }
        }

        cout<<sumr-suml<<endl;

    }

    
    
    return 0;
}