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
        int arr[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }

        ll ans = ((n*1.0*(n+1))/6)*(n+2);

        for(int i=1; i<n; i++)
        {
            if(arr[i]<arr[i+1])
            {
                ans -= (1LL*i*(n-i));
            }
        }

        cout<<ans<<endl;
    }

    
    
    return 0;
}