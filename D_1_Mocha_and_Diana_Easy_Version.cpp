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
    int n, a, b;
    cin>>n>>a>>b;
    DSU da(n), db(n);
    while(a--)
    {
        int u,v;
        cin>>u>>v;
        da.merge(u,v);
    }
    while(b--)
    {
        int u,v;
        cin>>u>>v;
        db.merge(u,v);
    }
    int cnt=0;
    vector<pair<int,int>>ans;
    for(int u=1; u<=n; u++)
    {
        for(int v=u+1; v<=n; v++)
        {
            if(!da.isSame(u,v) && !db.isSame(u,v))
            {
                cnt++;
                ans.push_back({u,v});
                da.merge(u,v);
                db.merge(u,v);
            }
        }
    }
    cout<<cnt<<endl;
    for(auto [u,v]: ans)
    {
        cout<<u<<" "<<v<<endl;
    }

}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    saim();
    
    
    return 0;
}