#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||    
ll const mod = 1e9+7;   

int n;
vector<int>arr;
ll dp[500][40005];


ll solve(int i, ll sum)
{
    if(i==arr.size())
    {
        if(sum==0) return 1;
        return 0;
    }

    if(dp[i][sum]!=-1) return dp[i][sum]%mod;

    ll ans=0;
    if(arr[i]<=sum)
    {   
        ans = (ans + solve(i, sum-arr[i]))%mod;
    }
    ans = (ans + solve(i+1, sum))%mod;

    return dp[i][sum] = ans%mod;
}

void saim()
{
    
    cin>>n;
    

    cout<<solve(0, n)%mod<<endl;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i=1; i<=4e4; i++)
    {
        string s = to_string(i);
        string t = s;
        reverse(t.begin(), t.end());
        if(s==t)
        {
            arr.push_back(i);
        }
        
    }
    memset(dp, -1, sizeof(dp));
   
    
    


    int t;
    cin>>t;
    while(t--)
    {
        saim();
    }

    
    
    return 0;
}