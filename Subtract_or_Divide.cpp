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
        int n;
        cin>>n;
        ll ans;
        if(n%2==1)
        {
            ans = n/2 + 1;
        }
        else
        {
            ans = (n/2) + ((n+3)/4);
        }
        cout<<ans<<endl;
    }

    
    
    return 0;
}