#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n;
    cin>>n;
    int a[n], c[n];
    for(int i=0; i<n; i++) cin>>a[i];
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>c[i];
        sum+=c[i];
    }

    ll dp[n], ans=0;
    for(int i=0; i<n; i++)
    {
        dp[i] = c[i];
        for(int j=0; j<i; j++)
        {
            if(a[j]<=a[i]) dp[i] = max(dp[i], dp[j]+c[i]);
        }
        ans = max(ans, dp[i]);
    }

    cout<<sum-ans<<endl;
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