#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int n;
int const sz = 1e5+6;
ll a[sz], b[sz], c[sz];
ll dp[sz][4];

ll solve(int i, int p)
{
    if(i==n) return 0;

    if(dp[i][p]!=-1) return dp[i][p];

    ll val1 = LLONG_MIN, val2 = LLONG_MIN, val3 = LLONG_MIN;
    if(p!=1) val1 = a[i] + solve(i+1, 1);
    if(p!=2) val2 = b[i] + solve(i+1, 2);
    if(p!=3) val3 = c[i] + solve(i+1, 3);
    return dp[i][p] = max({val1, val2, val3});

}

void saim()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }
    memset(dp, -1, sizeof(dp));

    cout<<solve(0,0)<<endl;


    
    
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    saim();

    
    
    return 0;
}