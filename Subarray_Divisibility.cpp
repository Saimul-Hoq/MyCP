#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    ll carr[n+1];
    carr[0] = 0;
    map<int,int>mp;
    mp[0]=1;
    ll ans=0;
    for(int i=1; i<=n; i++)
    {
        int val = (((ll)arr[i-1]+carr[i-1])%3+3)%3;
        ans+=(mp[val]);
        mp[val]++;
        carr[i] = (ll)arr[i-1]+carr[i-1];
    }
    cout<<ans<<endl;

    
    
    return 0;
}