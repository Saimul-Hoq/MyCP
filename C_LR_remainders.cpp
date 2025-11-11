#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int const mx = 2e5+5;
ll arr[mx];
ll tree[4*mx];
int n,m;

void segment_build(int i, int b, int e)
{
    if(b==e)
    {
        tree[i] = arr[b]%m;
        return;
    }

    int mid = b + (e-b)/2;
    int l = 2*i, r = 2*i+1;
    segment_build(l, b, mid);
    segment_build(r, mid+1, e);
    tree[i] = (tree[l] * tree[r])%m;

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
    tree[i] = (tree[l] * tree[r])%m;
}




void saim()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++) cin>>arr[i];
    segment_build(1,1,n);
    string s;
    cin>>s;
    int l=1, r=n;
    
    for(int i=1; i<=n; i++)
    {
        cout<<tree[1]<<" ";
        if(s[i-1]=='L')
        {
            segment_update(1, 1, n, l, 1);
            l++;
        }
        else
        {
            segment_update(1, 1, n, r, 1);
            r--;
        }
    }
    cout<<endl;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;;
    cin>>t;
    while(t--)
    {
        saim();
    }

    
    
    return 0;
}