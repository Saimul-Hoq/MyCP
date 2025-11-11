#include<bits/stdc++.h>
using namespace std;

int n,m;
int mat[11][11];
long long dp[11][11];

long long max_sum(int r, int c)
{
    if(r==n-1 && c==m-1)
    {
        dp[r][c] = mat[r][c];
        return dp[r][c];
    }
    if(r==n || c==m)
    {
        return INT_MIN;
    }

    long long val1 = mat[r][c] + max_sum(r+1, c);
    long long val2 = mat[r][c] + max_sum(r, c+1);
    dp[r][c] = max(val1, val2);
    return dp[r][c];
}


int main()
{
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>mat[i][j];
            dp[i][j] = -1;
        }
    }
    

    cout<<max_sum(0,0)<<endl;
    
    
    return 0;
}