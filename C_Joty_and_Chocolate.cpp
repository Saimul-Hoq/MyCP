#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    ll lcm = (a/__gcd(a,b))*b;
    lcm = n/lcm;
    ll ans = ((n/a)-lcm)*p + ((n/b)-lcm)*q + lcm*max(p,q);
    cout<<ans<<endl;

    
    
    return 0;
}