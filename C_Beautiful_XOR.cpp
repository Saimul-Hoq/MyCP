#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int on(int n, int k)
{
    return ((1<<k)|n);
}

void saim()
{
    int a,b;
    cin>>a>>b;
    if(__lg(b)>__lg(a))
    {
        cout<<-1<<endl;
        return;
    }
    if(a==b)
    {
        cout<<0<<endl;
        return;
    }

    int x=0;
    vector<int>v;
    for(int k=0; k<=31; k++)
    {
        if(((b>>k)&1)==0 && ((a>>k)&1)==1)
        {
            x = on(x, k);
            v.push_back(x);
            a = a^x;
            x=0;
        }
        else if(((b>>k)&1)==1 && ((a>>k)&1)==0)
        {
            x = on(x, k);
            v.push_back(x);
            a=a^x;
            x=0;
        }
    }
    cout<<v.size()<<endl;
    for(int val: v)
    {
        cout<<val<<" ";
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