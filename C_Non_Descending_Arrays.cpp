#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
ll const mod = 998244353;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n+1), b(n+1);
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(int i=1; i<=n; i++)
        {
            cin>>b[i];
        }
        ll ans=1;
        for(int i=1; i<=n; i++)
        {
            if(a[i]>=a[i-1] && a[i]>=b[i-1] && b[i]>=a[i-1] && b[i]>=b[i-1])
            {
                ans = (ans*2)%mod;
            }
        }
        cout<<ans<<endl;
    }

    
    
    return 0;
}