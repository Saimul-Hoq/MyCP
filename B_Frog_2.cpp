#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

ll n,k;
int arr[100005];
ll dp[100005];

ll solve(int i)
{
    if(i==(n)) return 0;

    if(dp[i]!=-1) return dp[i];

    ll ans=LLONG_MAX;
    for(int j=1; j<=k; j++)
    {
        if(i+j <= n)
        {
            ll tmp = solve(i+j) + abs(arr[i]-arr[i+j]);
            ans = min(ans, tmp);    
        }
    }

    return dp[i] = ans;
}

void saim()
{   
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        dp[i] = -1;
    }

    cout<<solve(1)<<endl;
    
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    saim();

    
    
    return 0;
}