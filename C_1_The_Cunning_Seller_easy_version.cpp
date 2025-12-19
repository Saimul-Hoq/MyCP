#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

map<ll,ll, greater<ll>>mp;

ll power(ll p, ll q)
{
    ll ans=1;
    for(int k=0; k<=__lg(q); k++)
    {
        if(((q>>k)&1)==1)
        {
            ans=(ans*p);
        }
        p=(p*p);
    }

    return ans;
}

void saim()
{
    ll n;
    cin>>n;
    ll cost=0;
    for(auto [a,b]: mp)
    {
        if(n>=a)
        {
            ll cnt = n/a;
            cost += (cnt*b);
            n = n%a;
        }
    }
    cout<<cost<<endl;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    for(int k=0; k<20; k++)
    {
        ll a = power(3,k);
        ll p = power(3, k+1);
        ll q = power(3, k-1);
        q = q*k;
        ll b = p + q;
        mp[a] = b;
        //cout<<a<<"->"<<b<<endl;
    }

    int t;
    cin>>t;
    while(t--)
    {
        saim();
    }
    
    
    return 0;
}

