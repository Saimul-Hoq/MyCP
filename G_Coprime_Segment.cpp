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
    tree[i] = __gcd(tree[l], tree[r]);

}

ll segment_query(int i, int b, int e, int qb, int qe)
{
    if(e<qb || qe<b) return 0LL;
    if(qb<=b && e<=qe) return tree[i];

    int mid = b + (e-b)/2;
    int l = 2*i, r = 2*i+1;
    return __gcd(segment_query(l, b, mid, qb, qe), segment_query(r, mid+1, e, qb, qe));
}


void saim()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) cin>>arr[i];  
    segment_build(1, 1, n);
    ll l=1, ans=LLONG_MAX;
    for(int r=1; r<=n; r++)
    {
        ll g = segment_query(1, 1, n, l, r);
        while(g==1)
        {
            ans = min(ans, (r-l+1));
            l++;
            g = segment_query(1, 1, n, l, r);
        }
    }
    if(ans==LLONG_MAX) cout<<-1<<endl;
    else cout<<ans<<endl;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    saim();

   
    
    return 0;
}