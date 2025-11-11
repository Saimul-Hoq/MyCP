#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

//way - 1
//checking if it can be taken or not. then taking decision accordingly.
// int n;
// int arr[100005];
// ll dp[100005][2];
// ll solve(int i, int s)
// {
//     if(i==n) return 0;

//     if(dp[i][s]!=LLONG_MIN) return dp[i][s];

//     if(s==1)
//     {
//         dp[i][s] = solve(i+1, 0) + arr[i];
//     }
//     ll val = solve(i+1, 1);

//     return dp[i][s] = max(dp[i][s], val);
// }
// void saim()
// {
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//         dp[i][0] = dp[i][1] = LLONG_MIN;
//     }

//     cout<<solve(0,1)<<endl;
    
// }


//way - 2
//Only going to the indexes where it can be taken. then taking decision accordingly.
int n;
int arr[100005];
ll dp[100005];
ll solve(int i)
{
    if(i==n) return 0;

    if(dp[i]!=LLONG_MIN) return dp[i];

    ll val1 = arr[i] + solve(i+2);
    ll val2 = solve(i+1);

    return dp[i] = max(val1, val2);
}
void saim()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        //dp[i][0] = dp[i][1] = LLONG_MIN;
        dp[i] = LLONG_MIN;
    }

    //cout<<solve(0,1)<<endl;
    cout<<solve(0)<<endl;
    
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    saim();
    
    
    return 0;
}