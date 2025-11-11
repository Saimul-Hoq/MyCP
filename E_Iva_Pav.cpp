#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int const mx = 2e5+5;
ll arr[mx];
ll tree[4*mx];
int n,k;

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
    tree[i] = (tree[l] & tree[r]);

}


ll segment_query(int i, int b, int e, int qb, int qe)
{
    if(e<qb || qe<b) return LLONG_MAX;
    if(qb<=b && e<=qe) return tree[i];

    int mid = b + (e-b)/2;
    int l = 2*i, r = 2*i+1;
    return (segment_query(l, b, mid, qb, qe) & segment_query(r, mid+1, e, qb, qe));
}

bool isPossible(int l, int r)
{
    ll val = segment_query(1, 1, n, l, r);
    if(val>=k) return true;
    return false;
}

void solve(int a)
{
    int l=a, r=n, ans=-1;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(isPossible(a, mid))
        {
            ans = mid;
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }

    }

    cout<<ans<<" ";
}

void saim()
{
    cin>>n;
    for(int i=1; i<=n; i++) cin>>arr[i];
    segment_build(1, 1, n);
    int q;
    cin>>q;
    while(q--)
    {
        int l;
        cin>>l>>k;
        solve(l);

    }
    cout<<endl;
    
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