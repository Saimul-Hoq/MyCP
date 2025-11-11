#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    pair<int,int> v[n][m];
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
            mp[arr[i][j]]++;
        }
    }

    auto it = mp.end();
    it--;
    int mx = it->first;

    for(int i=0; i<n; i++)
    {
        int cnt=0;
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]==mx) cnt++;
        }
        for(int j=0; j<m; j++)
        {
            v[i][j].first = cnt;
        }
    }

    for(int j=0; j<m; j++)
    {
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i][j]==mx) cnt++;
        }
        for(int i=0; i<n; i++)
        {
            v[i][j].second = cnt;
        }
    }

    bool check=false;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int total = v[i][j].first + v[i][j].second;
            if(arr[i][j]==mx) total--;
            if(total==mp[mx]) check=true;

        }
    }

    if(check) cout<<mx-1<<endl;
    else cout<<mx<<endl;

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