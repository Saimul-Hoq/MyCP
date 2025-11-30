#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    ll a,v,l,n;
    cin>>a>>v>>l>>n;
    ll p = min(v, ((a+l-1)/l));
    //cout<<p<<endl;
    if(p==2 && n==2) cout<<"NO"<<endl;
    else
    {
        if(p>=n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
   

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