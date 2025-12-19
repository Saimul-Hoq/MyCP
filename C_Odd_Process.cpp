#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n;
    cin>>n;
    vector<ll>arr(n);
    vector<ll>evn;
    vector<ll>od;
    ll esum=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            evn.push_back(arr[i]);
            esum+=arr[i];
        }
        else
        {
            od.push_back(arr[i]);
        }
    }
    if(od.size()==0)
    {
        for(int i=0; i<n; i++)
        {
            cout<<0<<" ";
        }
        cout<<endl;
        return;
    }
    sort(od.rbegin(), od.rend());

    if(evn.size()==0)
    {
        for(int i=1; i<=n; i++)
        {
            if(i%2==1) cout<<od[0]<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
        return;
    }

    sort(evn.rbegin(), evn.rend());
    ll emin = evn.back();
    evn[0] += od[0];
    for(int i=1; i<evn.size(); i++)
    {
        evn[i] = evn[i] + evn[i-1] ;
    }
    esum+=od[0];
    cout<<od[0]<<" ";
    for(ll val: evn)
    {
        cout<<val<<" ";
    }
    ll sz = evn.size() + 1;
    for(int i=sz+1; i<=n; i++)
    {
        ll lost = i-sz;
        if(i==n && lost%2==1) cout<<0;
        else
        {
            if(lost%2==1) cout<<esum-emin<<" ";
            else cout<<esum<<" ";
        }
    }
    cout<<endl;



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