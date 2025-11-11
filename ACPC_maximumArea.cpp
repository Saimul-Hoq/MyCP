#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n;
    cin>>n;
    vector<int>arr(n+2), lft(n+1), rgt(n+1), v;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    arr[n+1] = arr[0] = INT_MIN;
    v.push_back(0);
    for(int i=1; i<=n; i++)
    {
        while(arr[v.back()]>=arr[i]) 
        {
            v.pop_back();
        }
        lft[i] = v.back()+1;
        v.push_back(i);
    }
    v.clear();
    v.push_back(n+1);
    for(int i=n; i>=1; i--)
    {
        while(arr[v.back()]>=arr[i]) 
        {
            v.pop_back();
        }
        rgt[i] = v.back()-1;
        v.push_back(i);
    }
    ll ans=INT_MIN;
    for(int i=1; i<=n; i++)
    {
        ll val = arr[i]*(rgt[i]-lft[i]+1);
        ans=max(ans, val);
    }
    cout<<ans<<endl;

}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    saim();
    
    
    return 0;
}