#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

ll power(ll n, ll kk)
{
    ll ans=1;
    ll p = n;
    for(int k=0; k<=__lg(kk); k++)
    {
        if(((kk>>k)&1)==1)
        {
            ans *= p;
        }
        p=p*p;
    }
    

    return ans;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,l;
        cin>>a>>b>>l;
        ll k;
        set<int>count;
        for(int x=0; power(a, x)<=l; x++)
        {
            for(int y=0; 1; y++)
            {
                ll d = power(a,x)*power(b,y);
                if(d > l)
                {
                    break;
                }

                if(l%d==0)
                {
                    k = l/d;
                    count.insert(k);
                }


                
            }
        }

        cout<<count.size()<<endl;
    }

    
    
    return 0;
}