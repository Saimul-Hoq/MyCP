#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long a, b, c, temp, gcd, lcm, mult;
        cin>>a>>b>>c;
        mult = a*b;

        if(a>b)
        {
            while(a%b!=0)
            {
                temp = a;
                a=b;
                b=temp%b;
            }

            gcd = b;
        }
        else
        {
            swap(a,b);
            while(a%b!=0)
            {
                temp = a;
                a=b;
                b=temp%b;
            }

            gcd = b;
        }

        lcm = mult/gcd;

        for(long long i=lcm; i<=c; i+=lcm)
        {
            cout<<i<<endl;
        }

        cout<<endl;
    }

    return 0;
}