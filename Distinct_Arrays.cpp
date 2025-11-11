#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

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
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);

        long long ans = 1;
        long long mod = 998244353;
        

        for(int i=0; i<n; i++)
        {
            ans = (ans*(arr[i]-i))%mod;
            
        }

        cout<<ans<<endl;

    }

    
    
    return 0;
}