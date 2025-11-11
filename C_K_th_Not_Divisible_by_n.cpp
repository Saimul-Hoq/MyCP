#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

ll n,k;

ll position(ll a)
{
    ll b = a/n;
    ll c = a-b;
    
    return c;
}

ll solve(ll l, ll r)
{
    ll ans;
    while(l<=r)
    {
        ll mid = l + (r-l)/2;
        if(position(mid)>=k)
        {
            ans = mid;
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }

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
        
        cin>>n>>k;

        ll l=1, r=n*k;
        cout<<solve(l,r)<<endl;
    }

    
    
    return 0;
}