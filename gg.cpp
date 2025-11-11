#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int n;
int arr[8001];
ll cost[8001];
ll dp[8001][1030];

ll solve(int i, int mask)
{
    if(i==n-1) return 0;
    if(dp[i][mask]!=-1) return dp[i][mask];

    if(arr[i]>arr[i+1])
    {
        return dp[i][mask] = cost[i] + solve(i+2, (mask | (1<<i)));
    }
}


void saim()
{

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