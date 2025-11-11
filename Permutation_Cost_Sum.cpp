#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
const ll m = 998244353;

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
        vector<int>arr(n+1);
        int a=0, b=0, ok=0;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            if(arr[i]==i)
            {
                ok++;
            }
        }
        for(int i=1; i<=n; i++)
        {
            if(arr[i]!=i)
            {
                if(i==arr[arr[i]])
                {
                    b++;
                }
            }
        }
        b=b/2;
        a = b*2;
        ll ans = 0;
        for(int i=1; i<=n; i++)
        {
            ll j = min(n, 2*i);
            ll cb = ((j*(j+1))/2)*b;
            ll ca = 1LL*(n-j)*i*a;
            ll total = (cb + ca)%m;
            ans = (ans + total)%m;
        }
        a=(n-ok-a);
        b=a-1;
        for(int i=1; i<=n; i++)
        {
            ll j = min(n, (int)((1LL*a*i)/b));
            ll cb = ((j*(j+1))/2)*b;
            ll ca = 1LL*(n-j)*i*a;
            ll total = (cb + ca)%m;
            ans = (ans + total)%m;
        }

        cout<<ans<<endl;
    }

    
    
    return 0;
}