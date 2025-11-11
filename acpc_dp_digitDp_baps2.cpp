#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

//If you write form l to r, how many zeroes will be written?
//l<r<=1e9

int n;
string s;
ll dp1[11][2];
ll dp2[11][2][2];

ll solve1(int pos, int isSmall)
{
    if(pos==n) return 1;
    
    if(dp1[pos][isSmall]!=-1) return dp1[pos][isSmall];

    int r=s[pos]-'0';
    ll ans=0;
    if(isSmall) r = 9;
    for(int i=0; i<=r; i++)
    {
        ll temp = solve1(pos+1, isSmall || (i<r));
        ans+=temp;
    }
    return dp1[pos][isSmall] = ans;
}

ll solve2(int pos, int isSmall, int hasStarted)
{
    if(pos==n) return 0;
    if(dp2[pos][isSmall][hasStarted]!=-1) return dp2[pos][isSmall][hasStarted];

    ll r=s[pos]-'0', ans=0;
    if(isSmall) r = 9;
    for(int i=0; i<=r; i++)
    {
        ll val = solve2(pos+1, isSmall || (i<r), hasStarted || (i!=0));

        if(hasStarted && i==0) val = val + solve1(pos+1, isSmall || (i<r));

        ans+=val;
    }

    return dp2[pos][isSmall][hasStarted] = ans;
}

void saim()
{
    ll a,b;
    cin>>a>>b;


    string sa, sb;
    sb = to_string(b);
    s = sb;
    n = s.size();
    memset(dp1, -1, sizeof(dp1));
    memset(dp2, -1, sizeof(dp2));
    ll val1 = solve2(0, 0, 0);

    a--;
    sa = to_string(a);
    s = sa;
    n = s.size();
    memset(dp1, -1, sizeof(dp1));
    memset(dp2, -1, sizeof(dp2));
    ll val2 = solve2(0, 0, 0);

    cout<<val1-val2<<endl;

    
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    saim();
    
    
    return 0;
}