#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


int const mx = 1e5+5;
ll arr[mx];
ll tree[4*mx], lazy[4*mx];

void push(int i, int b, int e)
{
    if(lazy[i]==0) return;

    tree[i] += ((e-b+1)*lazy[i]);
    if(b!=e)
    {
        int l = 2*i, r = l+1;
        lazy[l] += lazy[i];
        lazy[r] += lazy[i];
    }
    lazy[i] = 0;
}

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

void segment_update(int i, int b, int e, int ub, int ue, ll val)
{
    push(i, b, e);
    if(ue<b || e<ub) return;
    if(ub<=b && e<=ue)
    {
        lazy[i] = val;
        push(i, b, e);
        return;
    }

    int mid = b + (e-b)/2;
    int l=2*i, r=2*i+1;
    segment_update(l, b, mid, ub, ue, val);
    segment_update(r, mid+1, e, ub, ue, val);
    tree[i] = tree[l] + tree[r];
}

ll segment_query(int i, int b, int e, int qb, int qe)
{
    push(i, b, e);
    if(e<qb || qe<b) return 0;
    if(qb<=b && e<=qe) return tree[i];

    int mid = b + (e-b)/2;
    int l = 2*i, r = 2*i+1;
    return segment_query(l, b, mid, qb, qe) + segment_query(r, mid+1, e, qb, qe);
}


void saim()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int c;
        cin>>c;
        if(c==1)
        {
            ll l,r,val;
            cin>>l>>r>>val;
            l++;
            segment_update(1, 1, n, l, r, val);
        }
        else
        {
            int a;
            cin>>a;
            a++;
            cout<<segment_query(1, 1, n, a, a)<<endl;
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