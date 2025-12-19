#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    ll n;
    cin>>n;
    ll a[n], b[n];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    ll kmx=0, kmn=0;
    for(int i=0; i<n; i++)
    {
        ll p = kmx - a[i];
        ll q = kmn - a[i];
        ll r = b[i] - kmx;
        ll s = b[i] - kmn;
        kmx = max({p,q,r,s});
        kmn = min({p,q,r,s});
    }
    cout<<kmx<<endl;
    
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        saim();
    }


    
    
    return 0;
}