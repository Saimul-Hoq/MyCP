#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

class A
{
    public:
    ll lft, rgt, dif;
};

void saim()
{
    ll n,c,q;
    cin>>n>>c>>q;
    string s;
    cin>>s;
    vector<A>arr(c+1);
    A aa;
    aa.lft = 1;
    aa.rgt = n;
    aa.dif = 0;
    arr[0] = aa;
    for(int i=1; i<=c; i++)
    {
        ll l,r;
        cin>>l>>r;
        A a;
        a.lft = arr[i-1].rgt+1;
        a.rgt = a.lft + (r-l);
        a.dif = a.lft - l;
        arr[i] = a;
    }
    while(q--)
    {
        ll k;
        cin>>k;
        for(int i=c; i>=1; i--)
        {
            if(k>=arr[i].lft)
            {
                k-=arr[i].dif;
            }
        }
        cout<<s[k-1]<<endl;
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