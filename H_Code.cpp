#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef  long long ll;
ll mod = 1e9+9;

ll get_power(ll p, ll n)
{
    ll ans = 1;
    for(int k=0; k<=__lg(n); k++)
    {
        if(((n>>k)&1)==1)
        {
            ans = (ans%mod *p%mod)%mod;
        }
        p = (p%mod * p%mod)%mod;
    }
    return ans;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    ll n;
    cin>>n;
   
    ll ans = get_power(2, n+1);
    
    
    ans = (ans - (n+2)%mod + mod)%mod;
    cout<<ans<<endl;


    
    
    return 0;
}