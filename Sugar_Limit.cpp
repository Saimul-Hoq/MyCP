#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int n;
int l;
vector<int>dp;

int solve(int i, vector<int>a, vector<int>b)
{
    if(i==n)
    {
        return 0;
    }
    if(dp[i]!=-1)
    {
        return dp[i];
    }

    if(b[i]<=l)
    {
        int val1 = a[i] + solve(i+1, a, b);
        int val2 = solve(i+1, a, b);
        dp[i] = max(val1, val2);
        return dp[i];
    }
    else
    {
        dp[i] = solve(i+1, a, b);
        return dp[i];
    }
}


int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }

        int ans = INT_MIN;
        for(int i=0; i<n; i++)
        {
            l = b[i];
            vector<int>dd(n,-1);
            dp = dd;
            int temp = solve(0, a, b);
            int p = temp-l;
            if(p<=0)
            {
                p = 0;
            }
            ans = max(ans, p);
        }

        cout<<ans<<endl;

    }

    
    
    return 0;
}