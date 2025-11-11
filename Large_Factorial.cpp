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
        ll n;
        cin>>n;
        ll m = 1e9 + 7;
        ll ans = 1;
        for(int i=1; i<=n; i++)
        {
            ans = (ans * i%m)%m;
        }

        cout<<ans<<endl;
    }
    
    
    
    return 0;
}