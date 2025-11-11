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
        int n,m;
        cin>>n>>m;
        vector<int>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        ll ans=0;
        for(int i=n-1; i>=0 && m; i--)
        {
            ans+=(1LL*arr[i]*m);
            m--;
        }
        cout<<ans<<endl;
    }

    
    
    return 0;
}