#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int n, w;
int weight[1005];
int profit[1005];
int dp[1005][1005];
int nxt[1005][1005];

int solve(int i, int w)
{
    if(i==n || w<=0) return 0;

    if(dp[i][w]!=-1) return dp[i][w];

    if(weight[i]<=w)
    {
        int val1 = profit[i] + solve(i+1, w-weight[i]);
        int val2 = solve(i+1, w);
        if(val1>val2) nxt[i][w] = 1;
        else nxt[i][w] = 0;
        return dp[i][w] = max(val1, val2);
    }
    else
    {
        nxt[i][w] = 0;
        return dp[i][w] = solve(i+1, w);
    }
}

vector<int>ans;
void nxt_print(int i, int w)
{
    if(i==n || w<=0) return;

    if(nxt[i][w] == 1)
    {
        ans.push_back(i+1);
        nxt_print(i+1, w-weight[i]);
    }
    else
    {
        nxt_print(i+1, w);
    }


}

void print(int i, int w)
{
    if(i==n || w<=0) return;

    if(weight[i]<=w)
    {
        int val1 = profit[i] + dp[i+1][w-weight[i]];
        int val2 = dp[i+1][w];
        if(val1>val2)
        {
            ans.push_back(i+1);
            print(i+1, w-weight[i]);
        }
        else
        {
            print(i+1, w);
        }
    }
    else
    {
        print(i+1, w);
    }
    
}


void saim()
{
    cin>>n>>w;
    for(int i=0; i<n; i++)
    {
        cin>>weight[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>profit[i];
    }
    memset(dp, -1, sizeof(dp));

    cout<<solve(0, w)<<endl;
    //nxt_print(0, w);
    print(0, w);
    cout<<"Taken products: ";
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