#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

//how many n length numbers are there which has every digit from 0 to 1?
//no leading zeroes are allowed

int n;
ll dp[1005][1050];


ll solve(int i, int mask)
{
    if(i==n) 
    {
        if(mask == ((1LL<<10)-1)) return 1;
        return 0;
    }

    if(dp[i][mask]!=-1) return dp[i][mask];

    ll low=0, ans=0;
    if(i==0) low=1;
    for(int k=low; k<10; k++)
    {
        ll temp = solve(i+1, (mask | (1<<k)));
        ans+=temp;
    }
    return dp[i][mask] = ans;
}

void saim()
{
    cin>>n;
    memset(dp, -1, sizeof(dp));
    cout<<solve(0, 0)<<endl;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    saim();
    
    
    return 0;
}