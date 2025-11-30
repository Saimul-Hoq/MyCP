#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

ll solve(ll a, ll n)
{
    ll ans=1;
    for(int i=1; i<=n; i++)
    {
        ans *= a;
        a--;
        if(ans>26) break;
    }
    if(ans>26) return INT_MAX;
    return ans;
}

void saim()
{
    ll a,v,l,n;
    cin>>a>>v>>l>>n;
    ll tmp = a - n;
    ll cmp = solve(tmp, l);
    v = v-n;
    ll p = min(v,cmp);
    if(p>=1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


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