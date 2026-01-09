#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

ll arr[300005];
map<ll, vector<ll>> mp;
map<ll,ll>dp;

ll solve(ll sz)
{
    if(mp.find(sz)==mp.end()) return 0;

    if(dp.find(sz)!=dp.end()) return dp[sz];

    ll ans=0;
    for(ll ad: mp[sz])
    {
        ll tmp = ad + solve(sz+ad);
        ans = max(ans, tmp);
    }

    return dp[sz] = ans;
}

void saim()
{
    ll n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    mp.clear();
    dp.clear();

    for(int i=2; i<=n; i++)
    {
        ll val = arr[i] + i - 1;
        mp[val].push_back(i-1);
    }

    cout<<solve(n)+n<<endl;

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