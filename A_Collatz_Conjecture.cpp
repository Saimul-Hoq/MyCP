#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        ll k, x;
        cin>>k>>x;
        ll ans = x * (1LL<<k);
        cout<<ans<<endl;

    }

    
    
    return 0;
}