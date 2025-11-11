#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n;
    cin>>n;
    vector<int>a(n);
    bool echeck=false;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0) echeck = true;
    }
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
    }
    map<int,set<int>>mp;
    for(int i=0; i<n; i++)
    {
        int val = a[i];
        int p=2;
        while(p*p<=val)
        {
            if(val%p==0)
            {
                mp[p].insert(i);
                val/=p;
            }
            else
            {
                p++;
            }
        }
        if(val!=1)
        {
            mp[val].insert(i);
        }
    }
    bool check=false;
    for(auto [a, b]: mp)
    {
        if(b.size()>1)
        {
            check=true;
            break;
        }
    }

    if(check)
    {
        cout<<0<<endl;
        return;
    }

    if(echeck)
    {
        cout<<1<<endl;
        return;
    }

    bool fcheck=false;
    for(int i=0; i<n; i++)
    {
        int val = a[i]+1;
        int p=2;
        while(p*p<=val)
        {
            if(val%p==0)
            {
                if(mp.find(p)!=mp.end())
                {
                    fcheck = true;
                    break;
                }
                val/=p;
            }
            else
            {
                p++;
            }
        }
        if(val!=1)
        {
            if(mp.find(val)!=mp.end())
            {
                fcheck=true;
                break;
            }
        }
        if(fcheck) break;
    }

    if(fcheck)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<2<<endl;
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