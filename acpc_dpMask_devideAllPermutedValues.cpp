#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

//given a string s(only digits) and an integer d.
//How many permutations of s is divisible by d?
// s<=10, all digits of s are unique
//d<=1000

int n;
string s;
ll d;
ll dp[1030][1005];

int solve(int mask, int mod)
{
    int pos = __builtin_popcount(mask);
    if(pos==n) return (mod==0);

    if(dp[mask][mod]!=-1) return dp[mask][mod];

    ll ans=0;
    for(int i=0; i<n; i++)
    {
        if(((mask>>i)&1)==0)
        {
            int temp = solve((mask | (1<<i)), (mod*10+(s[i]-'0'))%d);
            ans+=temp;
        }

    }
    return dp[mask][mod] = ans;
}

void saim()
{
    cin>>n>>s>>d;
    memset(dp, -1, sizeof(dp));
    cout<<solve(0, 0)<<endl;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    saim();
    
    
    return 0;
}