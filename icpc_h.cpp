#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    ll n,m;
    cin>>n>>m;
    set<ll>s;
    
    for(int i=0; i<n; i++)
    {
        ll a;
        cin>>a;
        s.insert(a);
    }
    while(m--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(s.find(a)!=s.end() && s.find(b)!=s.end()) s.insert(c);
    }
    cout<<s.size()<<endl;


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