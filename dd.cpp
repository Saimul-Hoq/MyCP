#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n;
    cin>>n;
    bool check=false;
    set<ll>s;
    for(int i=0; i<n; i++)
    {
        ll val;
        cin>>val;
        s.insert(val);
        if(val%2==1) check=true;
    }

    if(check) cout<<2<<endl;
    else
    {
        for(ll k=3; 1; k++)
        {
            check = false;
            for(ll val: s)
            {
                if(__gcd(val, k)==1)
                {
                    check=true;
                    break;
                }
            }
            if(check)
            {
                cout<<k<<endl;
                break;
            }
        }
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