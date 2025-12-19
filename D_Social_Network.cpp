#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         



struct DSU
{
    vector<int> par, rnk, sz;
    int c;
    DSU(int n): par(n+1, -1), rnk(n+1, 0), sz(n+1, 1), c(n)
    {
        for(int i=1; i<=n; i++) par[i] = i;
    }

    int find(int i)
    {
        if(par[i]==i) return i;
        else return par[i] = find(par[i]);
    }

    void merge(int u, int v)
    {
        u = find(u);
        v = find(v);
        if(u==v)
        {
            return;
        }
        
        if(rnk[u]>rnk[v])
        {
            swap(u,v);
        }
        else if(rnk[u]==rnk[v])
        {
            rnk[v]++;
        }

        par[u] = v;
        sz[v] += sz[u];
        c--;
    }

    bool isSame(int u, int v)
    {
        return find(u) == find(v);
    }

    int getSize(int u)
    {
        return sz[find(u)];
    }

    int cnt()
    {
        return c;
    }
};

void saim()
{
    int n,m;
    cin>>n>>m;
    DSU d(n);
    int extra=0;
    set<int>s;
  
    
    while(m--)
    {
        int u,v;
        cin>>u>>v;
        s.insert(u);
        s.insert(v);
        if(d.isSame(u,v))
        {
            extra++;
        }
        else
        {
            d.merge(u,v);
        }
        set<int>pr;
        for(int i: s)
        {
            pr.insert(d.find(i));
        }
        vector<int>vv;
        for(int i: pr)
        {
            vv.push_back(d.getSize(i));
        }
        sort(vv.rbegin(), vv.rend());
        int p = min(extra, (int)(vv.size()-1));
        ll ans = vv[0];
        for(int i=1; i<=p; i++)
        {
            ans+=vv[i];
        }
        ans+=max(0, (extra-p));
        cout<<ans-1<<endl;

        
    }
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    saim(); 
    
    
    return 0;
}