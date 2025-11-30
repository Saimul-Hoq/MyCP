#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    vector<ll>ansr;
    vector<ll>ansc;
    ll sum=0;
    ll temp=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            temp = (temp^arr[i][j]);
        }
        ansr.push_back(temp);
        sum+=temp;
        temp=0; 
    }

    temp=0;
    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
            temp = (temp^arr[i][j]);
        }
        ansc.push_back(temp);
        sum+=temp;
        temp=0; 
    }
    ll ans=INT_MAX;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            ll r = ansr[i];
            ll c = ansc[j];
            ll p = r^c;
            ll tmp = sum - r - c + p;
            ans = min(ans, tmp);

        }
    }
    cout<<ans<<endl;
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