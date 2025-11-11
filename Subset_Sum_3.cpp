#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int dp[105][10005];

bool get_subsets(int i, long long sum, vector<int>arr)
{
   
    if(i<0)
    {
        if(sum==0)
        {
            return false;
        }
        else if(sum%3==0)
        {
            return true;
        }
        return false;
    }
    
    if(dp[i][sum]!=-1)
    {
        return dp[i][sum];
    }
    bool b1 = get_subsets(i-1, sum, arr);
    if(b1)
    {
        dp[i][sum] = b1;
        return b1;
    }
    sum+=arr[i];
    bool b2 = get_subsets(i-1, sum, arr);
    dp[i][sum] = b1||b2;
    return dp[i][sum];
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        memset(dp, -1, sizeof(dp));
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        if(get_subsets(n-1, 0, arr))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }


    
    
    return 0;
}