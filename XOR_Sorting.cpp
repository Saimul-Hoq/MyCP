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
    int n,k;
    cin>>n>>k;
    if(k==0)
    {
        for(int i=1; i<=n; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
    else if(n==1)
    {
        cout<<-1<<endl;
    }
    else if(n==2)
    {
        if(k<=2) cout<<-1<<endl;
        else cout<<2<<" "<<1<<endl;
    }
    else 
    {
        if(k>max((1^n), (1^(n-1))))
        {
            cout<<-1<<endl;
            return;
        }
        

        int a=0, b=0;
        int l=1, r=0;
        int cnt=0;
        for(int p=0; p<=__lg(k); p++)
        {
            if(((k>>p)&1)==1)
            {
                if(l==1) a=on(a,p);
                else b=on(b,p);
                swap(l,r);
                cnt++;
            }
        }
        if(cnt==1)
        {
            for(int i=0; i<=__lg(k); i++)
            {
                if(((k>>i)&1)==0)
                {
                    a=on(a,i);
                    b=on(b,i);
                    break;
                }
            }
        }
        vector<int>v;
        for(int i=n; i>=1; i--)
        {
            if(i==a || i==b)
            {
                continue;
            }
            v.push_back(i);
        }
        while(!v.empty() && v.back()<max(a,b))
        {
            cout<<v.back()<<" ";
            v.pop_back();
        }
        cout<<max(a,b)<<" "<<min(a,b)<<" ";
        while(!v.empty())
        {
            cout<<v.back()<<" ";
            v.pop_back();
        }
        cout<<endl;
        
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