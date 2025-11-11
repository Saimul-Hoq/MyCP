#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int const mx = 2e5+5;
ll arr[mx];
ll tree[4*mx];

void segment_build(int i, int b, int e, int op)
{
    if(b==e)
    {
        tree[i] = arr[b];
        return;
    }

    int mid = b + (e-b)/2;
    int l = 2*i, r = 2*i+1;
    segment_build(l, b, mid, op*(-1));
    segment_build(r, mid+1, e, op*(-1));
    if(op==1) tree[i]  = (tree[l] ^ tree[r]);
    else tree[i] = (tree[l] | tree[r]);

}

void segment_update(int i, int b, int e, int u, int val, int op)
{
    if(u<b || e<u) return;
    if(b==e)
    {
        tree[i] = val;
        return;
    }

    int mid = b + (e-b)/2;
    int l=2*i, r=2*i+1;
    segment_update(l, b, mid, u, val, op*(-1));
    segment_update(r, mid+1, e, u, val, op*(-1));
    if(op==1) tree[i] = (tree[l] ^ tree[r]);
    else tree[i] = (tree[l] | tree[r]);
}



void saim()
{
    ll n,m;
    cin>>n>>m;
    int s = (1<<n);
    for(int i=1; i<=s; i++) cin>>arr[i];
    int op;
    if(n%2==0) op=1;
    else op=-1;

    segment_build(1, 1, s, op);
    
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        segment_update(1, 1, s, a, b, op);
        cout<<tree[1]<<endl;
    }

}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    saim();

    
    
    return 0;
}