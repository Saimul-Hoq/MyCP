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
        int n, m;
        cin>>n>>m;
        vector<int>arr(n+1);
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin()+1, arr.end(), greater<int>());
        ll ans=0;
        ans+=(2*arr[1]+1);
        for(int i=2; i<n; i++)
        {
            ans = ans + max(0, (arr[i]-arr[i-1])) + 1 + arr[i];
        }
        ans = ans + max(0, arr[n]-arr[n-1]) + 1 + max(0, arr[n]-arr[1]);

       
        if(ans<=m)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    
    
    return 0;
}