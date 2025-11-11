#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n+1);
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        map<int, deque<int>>mp;
        vector<int>dp(n+1);
        for(int i=1; i<=n; i++)
        {
            int x = arr[i];
            mp[x].push_back(i);

            if(mp[x].size()>x) mp[x].pop_front();

            if(mp[x].size()==x)  dp[i] = dp[mp[x][0]-1]+x;

            dp[i] = max(dp[i], dp[i-1]);

        }

        cout<<dp[n]<<endl;
    }

    
    
    return 0;
}