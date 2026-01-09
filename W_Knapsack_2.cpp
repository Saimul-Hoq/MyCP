#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

ll n,w;
ll weight[105];
ll value[105];
ll dp[105][100005];

ll solve(int i, ll sum)
{
    if(i==n+1)
    {
        if(sum==0) return 0;
        else return LLONG_MAX;
    }

    if(dp[i][sum]!=-1) return dp[i][sum];

    if(value[i]<=sum)
    {
        ll val1 = solve(i+1, sum-value[i]);
        if(val1!=LLONG_MAX) val1 = val1 + weight[i];
        ll val2 = solve(i+1, sum);
        return dp[i][sum] = min(val1, val2);
    }
    else 
    {
        return dp[i][sum] = solve(i+1, sum);
    }

}

void saim()
{
    cin>>n>>w;
    for(int i=1; i<=n; i++) 
    {
        cin>>weight[i]>>value[i];
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<=100000; j++)
        {
            dp[i][j] = -1;
        }
    }

    for(ll i=100000; i>=0; i--)
    {
        ll val = solve(1, i);
        if(val<=w)
        {
            cout<<i<<endl;
            break;
        }
    }
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    saim();

    
    
    return 0;
}