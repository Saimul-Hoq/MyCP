#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;



int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,q;
    cin>>n>>q;
    priority_queue<int>pq;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        pq.push(val);
    }
    vector<int>a(n+2);
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        a[l]++;
        a[r+1]--;

    }
    for(int i=1; i<=n; i++)
    {
        a[i] = a[i]+a[i-1];
    }
    sort(a.begin()+1, a.end()-1, greater<int>());
    ll ans=0;
    for(int i=1; i<=n; i++)
    {
        int val = pq.top();
        pq.pop();
        ans+=(1LL*a[i]*val);
    }
    cout<<ans<<endl;

    
    
    return 0; 
}