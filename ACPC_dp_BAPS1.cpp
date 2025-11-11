#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


//given (2*N)grid and (2*1), (2*2) tiles. how many ways to fillup it without rotation?
// ll dp[100005];
// ll solve(int i)
// {
//     if(i<=2) return i;

//     if(dp[i]!=-1) return dp[i];

//     return dp[i] = solve(i-1) + solve(i-2);
// }
// void saim()
// {
//     int n;
//     cin>>n;
//     memset(dp, -1, sizeof(dp));
//     cout<<solve(n)<<endl;
    

// }


//given (2*N)grid and (2*1), (2*2) tiles. how many ways to fillup it with rotation?
// ll dp[100005];
// ll solve(int i)
// {
//     if(i==1) return 1;
//     if(i==2) return 3;

//     if(dp[i]!=-1) return dp[i];

//     return dp[i] = solve(i-1) + solve(i-2) + solve(i-2);
// }
// void saim()
// {
//     int n;
//     cin>>n;
//     memset(dp, -1, sizeof(dp));
//     cout<<solve(n)<<endl;
    

// }


//given (3*N)grid and (3*1), (3*2) tiles. how many ways to fillup it with rotation?
ll dp[100005];
ll solve(int i)
{
    if(i<=2) return i;
    if(i==3) return 6;

    if(dp[i]!=-1) return dp[i];

    return dp[i] = solve(i-1) + solve(i-2) + 3*solve(i-3);
}
void saim()
{
    int n;
    cin>>n;
    memset(dp, -1, sizeof(dp));
    cout<<solve(n)<<endl;
    

}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    saim();

    
    
    return 0;
}