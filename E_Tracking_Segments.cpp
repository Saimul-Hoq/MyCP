#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int n, m, q;
pair<int,int> rng[100005];
int x[100005];

int const mx = 1e5+5;
ll arr[mx];
ll tree[4*mx];


void segment_build(int i, int b, int e)
{
    if(b==e)
    {
        tree[i] = 0;
        return;
    }

    int mid = b + (e-b)/2;
    int l = 2*i, r = 2*i+1;
    segment_build(l, b, mid);
    segment_build(r, mid+1, e);
    tree[i] = tree[l] + tree[r];

}



void segment_update(int i, int b, int e, int u)
{
    if(u<b || e<u) return;
    if(b==e)
    {
        tree[i] = 1;
        return;
    }

    int mid = b + (e-b)/2;
    int l=2*i, r=2*i+1;
    segment_update(l, b, mid, u);
    segment_update(r, mid+1, e, u);
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

bool isPossible(int mid)
{
    for(int i=1; i<=mid; i++)
    {
        segment_update(1, 1, n, x[i]);
    }
    bool check=false;
    for(int i=1; i<=m; i++)
    {
        auto [l,r] = rng[i];
        int cnt1 = segment_query(1, 1, n, l, r);
        int cnt0 = (r-l+1)-cnt1;
        if(cnt1>cnt0)
        {
            check=true;
            break;
        }
    }
    segment_build(1,1,n);
    
    return check;
}

void solve()
{
    int l=1, r=q, ans=-1;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(isPossible(mid))
        {
            ans = mid;
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }

    cout<<ans<<endl;
}


void saim()
{
    cin>>n>>m;
    
    for(int i=1; i<=m; i++)
    {
        int a,b;
        cin>>a>>b;
        rng[i] = {a,b};
    }
    cin>>q;
    for(int i=1; i<=q; i++)
    {
        int a;
        cin>>a;
        x[i] = a;
    }

    segment_build(1,1,n);
    solve();
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