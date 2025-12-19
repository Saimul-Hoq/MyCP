#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

struct DSU
{
    vector<int> par, rnk, sz, mini, maxi;
    int c;
    DSU(int n): par(n+1, -1), rnk(n+1, 0), sz(n+1, 1), c(n), mini(n+1, -1), maxi(n+1, -1)
    {
        for(int i=1; i<=n; i++)
        {
            par[i] = mini[i] = maxi[i] = i;

        }
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
        mini[v] = min(mini[v], mini[u]);
        maxi[v] = max(maxi[v], maxi[u]);
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

    int getMin(int u)
    {
        return mini[find(u)];
    }
    int getMax(int u)
    {
        return maxi[find(u)];
    }
};

void saim()
{
    int n,q;
    cin>>n>>q;
    DSU d(n);
    while(q--)
    {
        string s;
        cin>>s;
        if(s=="union")
        {
            int u,v;
            cin>>u>>v;
            d.merge(u,v);
        }
        else
        {
            int u;
            cin>>u;
            cout<<d.getMin(u)<<" "<<d.getMax(u)<<" "<<d.getSize(u)<<endl;
        }
    }
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    saim();

    
    
    return 0;
}