#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int g;
vector<int> arr[100005];
ll dp[100005];

ll solve(int i)
{
    if(i==g) return 1;

    if(dp[i]!=-1) return dp[i];

    ll val=0;
    for(int j: arr[i])
    {
        ll p = solve(j);
        val+=p;
    }
    dp[i] = val;
    return dp[i];

}

void saim()
{
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        int u,v;
        cin>>u>>v;
        arr[u].push_back(v);
    }
    cin>>g;
    for(int i=1; i<=n; i++) dp[i] = -1;

    ll ans=0;
    for(int i=1; i<=n; i++)
    {
        ans = ans + solve(i);
    }
    cout<<ans<<endl;

}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    saim();
    
    
    return 0;
}