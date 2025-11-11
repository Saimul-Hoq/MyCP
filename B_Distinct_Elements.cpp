#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    ll n;
    cin>>n;
    vector<ll>b(n+1), a(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>b[i];
    }
    a[1]=1;
    ll val=2;
    for(int i=2; i<=n; i++)
    {
        if(b[i] == (b[i-1]+i)) 
        {
            a[i] = val;
            val++;
        }
        else
        {
            ll p = b[i]-b[i-1];
            a[i] = a[i-p];
        }
    }

    for(int i=1; i<=n; i++)
    {
        cout<<a[i]<<" ";
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