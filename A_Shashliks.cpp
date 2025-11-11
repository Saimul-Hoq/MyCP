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
        int k,a,b,x,y;
        cin>>k>>a>>b>>x>>y;
        pair<int,int>p = {a,x}, q = {b,y};
        if(y<x)
        {
            pair<int,int>temp = p;
            p=q;
            q=temp;
        }
        ll ans=0;
        ans = (max(0, k-p.first+1)+p.second-1)/p.second;
        k = k - p.second*ans;
        ans+=(max(0, k-q.first+1)+q.second-1)/q.second;
        cout<<ans<<endl;
    }

    
    
    return 0;
}