#include<bits/stdc++.h>
using namespace std;

int value[1005];
int weight[1005];
int dp[1005][1005];

// int knapsack(int i, int max_weight)
// {
//     if(i<0 || max_weight<=0)
//     {
//         return 0;
//     }
//     if(dp[i][max_weight] != -1)
//     {
//         return dp[i][max_weight];
//     }

//     if(weight[i] <= max_weight)
//     {
//         int val1 = knapsack(i-1, max_weight-weight[i]) + value[i];
//         int val2 = knapsack(i-1, max_weight);
//         dp[i][max_weight] = max(val1, val2);
//         return dp[i][max_weight];
//     }
//     else
//     {
//         dp[i][max_weight] = knapsack(i-1, max_weight);
//         return dp[i][max_weight];
//     }
// }

int knapsack(int i, int mx)
{
    if(i<0 || mx<=0)
    {
        return 0;
    }
    if(dp[i][mx] != -1)
    {
        return dp[i][mx];
    }
    
    if(weight[i] <= mx)
    {
        int val1 = value[i] + knapsack(i-1, mx-weight[i]);
        int val2 = knapsack(i-1, mx);
        dp[i][mx] = max(val1, val2);
        return dp[i][mx];
    }
    else
    {
        dp[i][mx] = knapsack(i-1, mx);
        return dp[i][mx];
    }
}

int main()
{
    int n, max_weight;
    cin>>n>>max_weight;
    for(int i=0; i<n; i++)
    {
        cin>>value[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>weight[i];
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