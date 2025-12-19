#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||    
ll const mod = 998244353;     

int const sz = 2e5+5;
vector<int> arr[sz];
map<pair<int,pair<ll,ll>>, ll> dp;
ll val[sz];


ll solve(int i, ll p, ll c)
{
    auto it = dp.find({i, {p,c}});
    if(it!=dp.end()) return dp[{i, {p,c}}]%mod;

    ll a=0;
    for(int j: arr[i])
    {
        if(val[j]==(p+c))
        {
            ll b = solve(j, c, val[j])%mod;
            a = (a+b+1)%mod;
        }
    }

    return dp[{i, {p,c}}] = a%mod;


}

void saim()
{
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        ll v;
        cin>>v;
        val[i] = v;
        arr[i].clear();
    }
    dp.clear();
    pair<int,int> lst[m+1];
    for(int i=1; i<=m; i++)
    {
        int u,v;
        cin>>u>>v;
        arr[u].push_back(v);
        lst[i] = {u,v};
        
    }

    ll ans=0;
    for(int i=1; i<=m; i++)
    {
        auto [u,v] = lst[i];
        ll a = solve(v, val[u], val[v]);
        ans = (ans + a + 1)%mod;
    }

    cout<<ans%mod<<endl;


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