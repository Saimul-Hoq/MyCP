#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    ll n;
    cin>>n;
    ll cnt=0;
    vector<ll>ans;
    for(ll i=10; i<=(n); i*=10)
    {
        ll d = i+1;
        //cout<<d<<endl;
        if(n%d==0)
        {
            cnt++;
            ans.push_back(n/d);
        }
    }
    sort(ans.begin(), ans.end());
    cout<<cnt<<endl;
    for(ll val: ans)
    {
        cout<<val<<" ";
    }
    if(ans.empty()==false) cout<<endl;
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