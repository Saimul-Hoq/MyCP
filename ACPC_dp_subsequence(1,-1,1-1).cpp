//chose a subsequence (1, -1, 1, -1, 1, -1)

#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

//Can take adjacent values:
// int n;
// int arr[10005];
// ll dp[10005][2];
// ll solve(int i, int s)
// {
//     if(i==n) return 0;

//     if(dp[i][s]!=LLONG_MIN) return dp[i][s];

//     ll val1;
//     if(s==1) val1 = solve(i+1, 0) + arr[i];
//     else val1 = solve(i+1, 1) + (-1)*arr[i];

//     ll val2 = solve(i+1, s);
//     dp[i][s] = max(val1, val2);
//     return dp[i][s];
    
   
// }


//Cannot take adjacent values:
int n;
int arr[10005];
ll dp[10005][2];
ll solve(int i, int s)
{
    if(i==n) return 0;

    if(dp[i][s]!=LLONG_MIN) return dp[i][s];

    ll val1;
    if(s==1) val1 = solve(i+2, 0) + arr[i];
    else val1 = solve(i+2, 1) + (-1)*arr[i];

    ll val2 = solve(i+1, s);
    dp[i][s] = max(val1, val2);
    return dp[i][s];
    
   
}

void saim()
{
   
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        dp[i][0] = dp[i][1] = LLONG_MIN;
    }
    
    cout<<solve(0, 1)<<endl;

}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    saim();

    
    
    return 0;
}