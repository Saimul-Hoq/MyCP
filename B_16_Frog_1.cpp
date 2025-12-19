#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int n;
int arr[100005];
ll dp[100005];

// ll solve(int i)
// {
//     if(i==n) return 0;

//     if(dp[i]!=-1) return dp[i];

//     if(i+2<=n)
//     {
//         ll val1 = solve(i+1) + abs(arr[i]-arr[i+1]);
//         ll val2 = solve(i+2) + abs(arr[i]-arr[i+2]);
//         return dp[i] = min(val1, val2);
//     }
//     else
//     {
//         return dp[i] = solve(i+1) + abs(arr[i]-arr[i+1]);
//     }
// }

ll solve_iterative()
{
    //Base case
    dp[1] = 0;
    dp[2] = abs(arr[2]-arr[1]);

    for(int i=3; i<=n; i++)
    {
        dp[i] = min((dp[i-1]+abs(arr[i-1]-arr[i])), (dp[i-2]+abs(arr[i-2]-arr[i])));
    }

    return dp[n];
}

void saim()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        dp[i] = -1;
    }

    //cout<<solve(1)<<endl;
    cout<<solve_iterative()<<endl;
    

}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    saim();

    
    
    return 0;
}