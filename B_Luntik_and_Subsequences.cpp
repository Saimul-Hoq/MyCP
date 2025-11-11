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
        ll a=0, b=0;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            if(val==1) a++;
            else if(val==0) b++;    
        }
        ll ans = a*(1LL<<b);
        cout<<ans<<endl;
    }

    
    
    return 0;
}