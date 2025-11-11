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
        ll a,b;
        cin>>a>>b;
        if(b%2==0)
        {
            ll k = b/2;
            ll ans = a*k + b/k;
            if(ans%2==0)
            {
                cout<<ans<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
        else
        {
            ll ans = a*b + 1;
            if(ans%2==0)
            {
                cout<<ans<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
    }

    
    
    return 0;
}