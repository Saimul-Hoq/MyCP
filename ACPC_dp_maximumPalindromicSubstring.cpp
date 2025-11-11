#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

//TC=O(2*N^2)

int n;
string s;
int dp[1005][1005];

int solve(int l, int r)
{
    if(l>=r) return 1;

    if(dp[l][r]!=-1) return dp[l][r];

    if(s[l]==s[r]) return dp[l][r] = solve(l+1, r-1);
    else return dp[l][r] = 0;
}

void saim()
{
    cin>>n>>s;
    memset(dp, -1, sizeof(dp));
    int ans=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(solve(i,j)) ans = max(ans, (j-i+1));
        }
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