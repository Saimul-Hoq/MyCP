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
    int x,y,z;
    cin>>x>>y>>z;
    int a=0, b=0, c=0;

    for(int k=0; k<=__lg(x); k++)
    {
        if(((x>>k)&1)==1)
        {
            a = on(a,k);
            b = on(b,k);
        }
    }

    for(int k=0; k<=__lg(y); k++)
    {
        if(((y>>k)&1)==1)
        {
            c = on(c,k);
            b = on(b,k);
        }
    }

    for(int k=0; k<=__lg(z); k++)
    {
        if(((z>>k)&1)==1)
        {
            a = on(a,k);
            c = on(c,k);
        }
    }

    bool check=true;
    if((a&b)!=x) check=false;
    if((b&c)!=y) check=false;
    if((a&c)!=z) check=false;
    
    if(check)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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