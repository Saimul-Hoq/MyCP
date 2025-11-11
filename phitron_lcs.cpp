#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

//TC = O(m*n)

string a,b;
int dp[1005][1005];

int lcs(int i, int j)
{
    
    if(i<0 || j<0) return 0;

    if(dp[i][j]!=-1) return dp[i][j];
    
    if(a[i]==b[j])
    {
        dp[i][j] = lcs(i-1, j-1) + 1;
        return dp[i][j];
    }
    else
    {
        int val1 = lcs(i-1, j);
        int val2 = lcs(i, j-1);
        dp[i][j] = max(val1, val2);
        return dp[i][j];
    }
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    memset(dp, -1, sizeof(dp));
    cin>>a>>b;
    cout<<lcs(a.size()-1, b.size()-1)<<endl;

    
    
    return 0;
}