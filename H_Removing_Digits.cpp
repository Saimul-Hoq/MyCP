#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int n;
ll dp[1000005];

ll solve(int num)
{
    if(num==0) return 0;

    if(dp[num]!=-1) return dp[num];

    ll ans=1e18;
    string s = to_string(num);
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!='0')
        {
            int a = s[i] - 48;
            ll tmp = 1 + solve(num-a);
            ans = min(ans, tmp);
        }
    }

    return dp[num] = ans;
}

void saim()
{
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        dp[i] = -1;
    }
    cout<<solve(n)<<endl;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    saim();

    
    
    return 0;
}