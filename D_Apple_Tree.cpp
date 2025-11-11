#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int dp[200005];

int solve(int i, vector<int> arr[], bool vst[])
{
    vst[i] = true;

   
    int val=0, cnt=0;;
    for(int j: arr[i])
    {
        if(!vst[j])
        {
            int a = solve(j, arr, vst);
            val+=a;
            cnt++;
        }
    }

    if(cnt==0)
    {
        dp[i] = 1;
        return 1;
    }
    else
    {
        dp[i] = val;
        return dp[i];
    }
  


}

void saim()
{
    int n;
    cin>>n;
    vector<int> arr[n+1];
    for(int i=1; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    memset(dp, 0, sizeof(dp));
    bool vst[n+1];
    memset(vst, false, sizeof(vst));
    solve(1, arr, vst);
    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        cout<<1LL*dp[a]*dp[b]<<endl;
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
        saim();
    }

    
    
    return 0;
}