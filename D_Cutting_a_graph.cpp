#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

struct OP
{
    string s;
    int u,v;
};

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
    int n,m,q;
    cin>>n>>m>>q;
    DSU d(n);
    while(m--)
    {
        int a,b;
        cin>>a>>b;
    }
    vector<OP> arr;
    while(q--)
    {
        OP op;
        string s;
        cin>>s;
        int u,v;
        cin>>u>>v;
        op.s = s;
        op.u = u;
        op.v = v;
        arr.push_back(op);
        
    }
    reverse(arr.begin(), arr.end());
    vector<string>ans;
    for(OP o:arr)
    {
        if(o.s == "cut")
        {
            d.merge(o.u, o.v);
        }
        else
        {
            ans.push_back((d.isSame(o.u, o.v)? "YES": "NO"));
        }
    }
    reverse(ans.begin(), ans.end());
    for(string str: ans)
    {
        cout<<str<<endl;
    }
    
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    saim();
    
    
    return 0;
}