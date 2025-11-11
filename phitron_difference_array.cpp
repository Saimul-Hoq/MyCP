#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q;
    cin>>n>>q;
    vector<int>arr(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    vector<int>darr(n+2);
    for(int i=1; i<=n; i++)
    {
        darr[i] = arr[i] - arr[i-1];
    }
    
    while(q--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        darr[a]+=c;
        darr[b+1]-=c;
    }
    vector<int>ans(n+1);
    for(int i=1; i<=n; i++)
    {
        ans[i] = darr[i] + ans[i-1];
    }
    for(int val: ans)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    
    
    return 0;
}