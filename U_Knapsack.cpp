#include<bits/stdc++.h>
using namespace std;

int value[30];
int weight[30];
int dp[30][105];

int knapsack(int i, int mw)
{
    if(i<0 || mw<=0)
    {
        return 0;
    }
    if(dp[i][mw] != -1)
    {
        return dp[i][mw];
    }

    if(weight[i] <= mw)
    {
        int val1 = value[i] + knapsack(i-1, mw-weight[i]);
        int val2 = knapsack(i-1, mw);
        dp[i][mw] = max(val1, val2);
        return dp[i][mw];
    }
    else
    {
        dp[i][mw] = knapsack(i-1, mw);
        return dp[i][mw];
    }
}

int main()
{
    int n, max_weight;
    cin>>n>>max_weight;
    
    for(int i=0; i<n; i++)
    {
        cin>>weight[i];
        cin>>value[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=max_weight; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout<<knapsack(n-1, max_weight)<<endl;
    
    return 0;
}