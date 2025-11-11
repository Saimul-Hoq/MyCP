#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int const mx = 1e5+5;
ll arr[mx];
pair<ll,ll> tree[4*mx];

void segment_build(int i, int b, int e)
{
    if(b==e)
    {
        tree[i] = {arr[b], 1};
        return;
    }

    int mid = b + (e-b)/2;
    int l = 2*i, r = 2*i+1;
    segment_build(l, b, mid);
    segment_build(r, mid+1, e);
    if(tree[l].first == tree[r].first) 
    {
        tree[i] = {tree[l].first, tree[l].second + tree[r].second};
    }
    else
    {
        tree[i] = min(tree[l], tree[r]);

    }


}

void segment_update(int i, int b, int e, int u, int val)
{
    if(u<b || e<u) return;
    if(b==e)
    {
        tree[i] = {val, 1};
        return;
    }

    int mid = b + (e-b)/2;
    int l=2*i, r=2*i+1;
    segment_update(l, b, mid, u, val);
    segment_update(r, mid+1, e, u, val);
    if(tree[l].first == tree[r].first) 
    {
        tree[i] = {tree[l].first, tree[l].second + tree[r].second};
    }
    else
    {
        tree[i] = min(tree[l], tree[r]);

    }
}

pair<ll,ll> segment_query(int i, int b, int e, int qb, int qe)
{
    if(e<qb || qe<b) return {LLONG_MAX,LLONG_MAX};
    if(qb<=b && e<=qe) return tree[i];

    int mid = b + (e-b)/2;
    int l = 2*i, r = 2*i+1;
    pair<ll,ll> p1 = segment_query(l, b, mid, qb, qe);
    pair<ll,ll> p2 = segment_query(r, mid+1, e, qb, qe);
    if(p1.first == p2.first) 
    {
        return {p1.first, p1.second + p2.second};
    }
    else
    {
        return min(p1, p2);

    }
}

void saim()
{
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    segment_build(1, 1, n);
    while(m--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        b++;

        if(a==1) segment_update(1, 1, n, b, c);
        else
        {
            pair<ll,ll> p = segment_query(1,1,n,b,c);
            cout<<p.first<<" "<<p.second<<endl;
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