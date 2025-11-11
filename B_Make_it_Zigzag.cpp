#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    ll n;
    cin>>n;
    vector<ll>arr(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    ll ans=0;
    ll mx = arr[1];
    for(int i=2; i<=n; i++)
    {
        mx = max(mx, arr[i]);
        
        if(i%2==1)
        {
           
            continue;
        }
        arr[i] = mx;
        ll p = max(1LL*0, arr[i-1]-arr[i]+1);
        ans+=p;
        arr[i-1]-=p;

        if(i+1<=n)
        {
            p = max(1LL*0, arr[i+1]-arr[i]+1);
            ans+=p;
            mx = max(mx, arr[i+1]);
            arr[i+1]-=p;
        }
       
    }
    cout<<ans<<endl;
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