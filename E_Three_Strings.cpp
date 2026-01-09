#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

string a,b,c;
int na,nb,nc;
int dp[1005][1005];

int solve(int ia, int ib, int ic)
{
    if(ic==nc) return 0;

    if(dp[ia][ib]!=-1) return dp[ia][ib];

    int val1 = INT_MAX, val2 = INT_MAX;

    if(ia<na)
    {
        if(a[ia]==c[ic]) val1 = solve(ia+1, ib, ic+1);
        else val1 = 1 + solve(ia+1, ib, ic+1);
    }

    if(ib<nb)
    {
        if(b[ib]==c[ic]) val2 = solve(ia, ib+1, ic+1);
        else val2 = 1 + solve(ia, ib+1, ic+1);
    }

    
    return dp[ia][ib] = min(val1, val2);
}

void saim()
{
    cin>>a>>b>>c;
    na = a.size();
    nb = b.size();
    nc = c.size();
    
    for(int i=0; i<=na; i++)
    {
        for(int j=0; j<=nb; j++)
        {
            dp[i][j] = -1;
        }
    }


    cout<<solve(0,0,0)<<endl;
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