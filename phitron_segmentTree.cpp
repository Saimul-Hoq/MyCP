#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int const mx = 1e5+5;
ll arr[mx];
ll tree[4*mx];

void segment_build(int i, int b, int e)
{
    if(b==e)
    {
        tree[i] = arr[b];
        return;
    }

    int mid = b + (e-b)/2;
    int l = 2*i, r = 2*i+1;
    segment_build(l, b, mid);
    segment_build(r, mid+1, e);
    tree[i] = tree[l] + tree[r];

}

void segment_update(int i, int b, int e, int u, int val)
{
    if(u<b || e<u) return;
    if(b==e)
    {
        tree[i] = val;
        return;
    }

    int mid = b + (e-b)/2;
    int l=2*i, r=2*i+1;
    segment_update(l, b, mid, u, val);
    segment_update(r, mid+1, e, u, val);
    tree[i] = tree[l] + tree[r];
}

ll segment_query(int i, int b, int e, int qb, int qe)
{
    if(e<qb || qe<b) return 0;
    if(qb<=b && e<=qe) return tree[i];

    int mid = b + (e-b)/2;
    int l = 2*i, r = 2*i+1;
    return segment_query(l, b, mid, qb, qe) + segment_query(r, mid+1, e, qb, qe);
}

void saim()
{

}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    


    
    
    return 0;
}