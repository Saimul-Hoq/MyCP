#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int const mx = 1e5+5;
int arr[mx];
int tree[4*mx];

void segment_update(int i, int b, int e, int ub, int ue)
{
    if(ue<b || e<ub) return;
    if(ub<=b && e<=ue)
    {
        tree[i] = tree[i]*(-1);
        
        return;
    }

    int mid = b + (e-b)/2;
    int l=2*i, r=2*i+1;
    segment_update(l, b, mid, ub, ue);
    segment_update(r, mid+1, e, ub, ue);
}

int segment_query(int i, int b, int e, int qb, int qe, int k)
{
    
    if(e<qb || qe<b) return 0;
    k = k*tree[i];
    if(qb==b && e==qe)
    {
        if(k==1) return arr[b];
        else return !arr[b];
    }

    int mid = b + (e-b)/2;
    int l = 2*i, r = 2*i+1;
   
    return segment_query(l, b, mid, qb, qe, k) + segment_query(r, mid+1, e, qb, qe, k);
}

void saim(int cs)
{
    string s;
    cin>>s;
    int n = s.size();
    for(int i=0; i<n; i++)
    {
        arr[i+1] = s[i] - '0';
    }
    for(int i=1; i<=(4*n); i++)
    {
        tree[i] = 1;
    }
    int q;
    cin>>q;
    cout<<"Case "<<cs<<":"<<endl;
    while(q--)
    {
        char ch;
        cin>>ch;
        if(ch=='I')
        {
            int l,r;
            cin>>l>>r;
            segment_update(1,1,n,l,r);
        }
        else
        {
            int l;
            cin>>l;
            cout<<segment_query(1,1,n,l,l,1)<<endl;
        }
    }
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        saim(i);
    }
    
    
    return 0;
}









