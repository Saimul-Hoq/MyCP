#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
ll mod = 1e9+7;

ll npr(ll n, ll r)
{
    ll ans = n;
    for(ll i=n-1; i>=r; i--)
    {
        ans = (ans%mod * i%mod)%mod;
    }

    return ans;
}

ll fact(ll n)
{
    ll ans = n;
    for(ll i=n-1; i>=1; i--)
    {
        ans = (ans%mod * i%mod)%mod;
    }

    return ans;
}

ll power(ll p, ll q)
{
    ll ans=1;
    for(int k=0; k<=__lg(q); k++)
    {
        if(((q>>k)&1)==1)
        {
            ans = (ans * p%mod)%mod;
        }
        p = (p%mod * p%mod)%mod;
    }

    return ans;
}

void saim()
{
    ll a,b,k,n,m;
    cin>>a>>b>>k;

    n = ((k * (a-1))%mod + 1)%mod;
    ll p = npr(n, (n-a+1));
    ll q = fact(a);
    ll r = (p%mod * power(q, mod-2)%mod)%mod;
    m = ((r * k%mod * (b-1))%mod + 1)%mod;

    cout<<n<<" "<<m<<endl;



}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        saim();
    }

    
    
    return 0;
}