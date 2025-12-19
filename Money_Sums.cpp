#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int n;
int arr[105];
int dp[105][100005];

int solve(int i, int sum)
{
    if(i==n)
    {
        if(sum==0) return 1;
        else return 0;
    }
    if(dp[i][sum]!=-1) return dp[i][sum];

    if(arr[i]<=sum)
    {
        int val1 = solve(i+1, sum-arr[i]);
        int val2 = solve(i+1, sum);
        return dp[i][sum] = val1 + val2;
    }
    else
    {
        return dp[i][sum] = solve(i+1, sum);
    }
}

void saim()
{
    cin>>n;
    int msum=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        msum+=arr[i];
    }
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=msum; j++)
        {
            dp[i][j] = -1;
        }
    }
    vector<int>ans;
    for(int i=1; i<=msum; i++)
    {
       
        if(solve(0, i)!=0)
        {
            ans.push_back(i);
        }
    }
    cout<<ans.size()<<endl;
    for(int val: ans)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    saim();

    
    
    return 0;
}