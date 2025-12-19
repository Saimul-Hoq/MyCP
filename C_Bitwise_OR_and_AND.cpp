#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int const mx = 1e5+5;
ll arr[mx];
ll tree[4*mx], lazy[4*mx];

void push(int i, int b, int e)
{
    if(lazy[i]==-1) return;

    tree[i] = (tree[i] | lazy[i]);
    if(b!=e)
    {
        int l = 2*i, r = l+1;
        if(lazy[l]==-1) lazy[l] = lazy[i];
        else  lazy[l] = (lazy[i] | lazy[l]);

        if(lazy[r]==-1) lazy[r] = lazy[i];
        else lazy[r] = (lazy[i] | lazy[r]);
       
        
    }
    lazy[i] = -1;
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
    tree[i] = (tree[l] & tree[r]);
}

ll segment_query(int i, int b, int e, int qb, int qe)
{
    push(i, b, e);
    if(e<qb || qe<b) return (1<<30)-1;
    if(qb<=b && e<=qe) return tree[i];

    int mid = b + (e-b)/2;
    int l = 2*i, r = 2*i+1;
    return (segment_query(l, b, mid, qb, qe) & segment_query(r, mid+1, e, qb, qe));
}

void saim()
{
    int n,m;
    cin>>n>>m;
    memset(lazy, -1, sizeof(lazy));
    while(m--)
    {
        int c;
        cin>>c;
        if(c==1)
        {
            ll l,r,v;
            cin>>l>>r>>v;
            l++;
            segment_update(1,1,n,l,r,v);
        }
        else
        {
            int l,r;
            cin>>l>>r;
            l++;
            cout<<segment_query(1,1,n,l,r)<<endl;
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