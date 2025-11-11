#include<bits/stdc++.h>
using namespace std;

long long dp[1005];

long long fibo(int n)
{
    if(n<2)
    {
        return n;
    }

    if(dp[n]!=-1)
    {
        return dp[n];
    }

    dp[n] = fibo(n-1) + fibo(n-2);
    return dp[n];
}


int regular_fibo(int n)
{
    if(n<2)
    {
        return n;
    }

    return fibo(n-1) + fibo(n-2);
}


// int fact(int n)
// {
//     if(n==1)
//     {
//         return 1;
//     }

//     return n * fact(n-1);
// }

// int sum(int n)
// {
//     if(n>5)
//     {
//         return 0;
//     }

//     return n + sum(n+1);
// }

// int main()
// {
//     memset(dp, -1, sizeof(dp));
//     //cout<<fact(5)<<endl;
//     //cout<<sum(1)<<endl;
//     int n;
//     cin>>n;
//     cout<<fibo(n)<<endl;
//     // cout<<regular_fibo(n)<<endl;
    
    
//     return 0;
// }

//Bottom-up approach:
int main()
{
    int n;
    cin>>n;
    long long fibo[n+1];
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i=2; i<=n; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

    cout<<fibo[n]<<endl;

    return 0;
}

