#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


//given a,b and x; print how many integers between a and b have a digit sum equal to x?
// a<b<=1e9
// x<=1e5

string s;
int x, sz;
ll dp[12][2][92];

int solve(int pos, int isSmall, int sum)
{
    if(pos==sz) return (sum==x);

    if(dp[pos][isSmall][sum]!=-1) return dp[pos][isSmall][sum];

    int r=s[pos]-'0';
    if(isSmall) r = 9;
    ll ans=0;
    for(int i=0; i<=r; i++)
    {
        int nxt = isSmall || (i<r);
        ll temp = solve(pos+1, nxt, sum+i);
        ans+=temp;
    }
    return dp[pos][isSmall][sum] = ans;
}

void saim()
{
    int a,b;
    
    cin>>a>>b>>x;
    
    string sb = to_string(b);
    a--;
    string sa = to_string(a);

    memset(dp, -1, sizeof(dp));
    s = sb;
    sz = sb.size();
    ll val1 = solve(0, 0, 0);

    memset(dp, -1, sizeof(dp));
    s=sa;
    sz = sa.size();
    ll val2 = solve(0, 0, 0);

    cout<<val1-val2<<endl;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    saim();
    
    
    return 0;
}