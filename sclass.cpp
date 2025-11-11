#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int n;
ll dp[100005];


ll solve(int i, ll sum, vector<int>&arr, vector<int>&v)
{
    if(i==n) return 0;

    if(dp[i]!=LLONG_MIN) return dp[i];

    v.push_back(arr[i]);
    ll p = arr[i];
    if((v.size())%2==0) p*=(-1);
    ll val1 = sum + p + solve(i+1, sum+p, arr, v);
    v.pop_back(); 

    ll val2 = solve(i+1, sum, arr, v);
    dp[i] = max(val1, val2);
    return dp[i];
}

void saim()
{
    
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    memset(dp, LLONG_MIN, sizeof(dp));

    vector<int>v;
    cout<<solve(0, 0, arr, v)<<endl;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    saim();
    
    
    return 0;
}