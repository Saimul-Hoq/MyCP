#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int gcd(int a, int b)
{
    if(b>a)
    {
        swap(a,b);
    }
    int rem = a%b;
    while(rem!=0)
    {
        a=b;
        b=rem;
        rem=a%b;
    }
    return b;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int t;
    cin>>t;
    while(t--)
    {
        int a,b,k;
        cin>>a>>b>>k;
        int prea=a, preb=b;
        while(k--)
        {
            int g = gcd(a,b);
            if(a>b)
            {
                a = g;
            }
            else
            {
                b = g;
            }

            
            if(prea==a && preb==b)
            {
                break;
            }
            else
            {
                prea=a;
                preb=b;
            }
        }
        cout<<a+b<<endl;
    }
    
    
    return 0;
}