#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

class mcl
{
    public:
    int l,r,d;
};

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>arr(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    vector<ll>darr(n+2);
    for(int i=1; i<=n; i++)
    {
        darr[i] = arr[i]-arr[i-1];
    }
    vector<mcl>marr(m+1);
    for(int p=1; p<=m; p++)
    {
        int l,r,d;
        cin>>l>>r>>d;
        mcl ml;
        ml.l = l;
        ml.r = r; 
        ml.d = d; 
        marr[p] = ml;

    }
    vector<int>count(m+2);
    while(k--)
    {
        int x,y;
        cin>>x>>y;
        count[x]++;
        count[y+1]--;
    }
    for(int i=1; i<=m; i++)
    {
        count[i] = count[i]+count[i-1];
    }
    for(int i=1; i<=m; i++)
    {
        mcl ml = marr[i];
        int l=ml.l, r=ml.r, d=ml.d;
        darr[l]+=(1LL*d*count[i]);
        darr[r+1]-=(1LL*d*count[i]);
    }
    for(int i=1; i<=n; i++)
    {
        darr[i] = darr[i] + darr[i-1];
        cout<<darr[i]<<" ";
    }
    cout<<endl;



    
    
    return 0;
}