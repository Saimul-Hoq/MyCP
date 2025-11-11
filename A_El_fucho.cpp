#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n;
    cin>>n;
    int a=n, b=0, p=0, q=0;
    int ans=0;
    while(a!=1 || b!=1)
    {
        if(a>1)
        {
            p = a/2;
            ans+=p;
            a-=p;
        }
        if(b>1)
        {
            q = b/2;
            ans+=q;
            b-=q;
        }

        b+=p;
        p=0;
        q=0;
    }

    cout<<ans+1<<endl;
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