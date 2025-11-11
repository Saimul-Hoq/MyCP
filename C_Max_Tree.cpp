#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void solve(int i, int p, vector<pair<int,int>>&v, vector<int> arr[], bool vst[], map<pair<int,int>, pair<int,int>>&mp)
{
    vst[i] = true;

    for(int j: arr[i])
    {
        if(!vst[j])
        {
            pair<int,int>pr = mp[{min(i,j), max(i,j)}];
            int a,b;
            if(i<j)
            {
                a = pr.first;
                b = pr.second;
            }
            else
            {
                a = pr.second;
                b = pr.first;
            }
            int val;
            if(b>a) val = p+1;
            else val = p-1;
            v.push_back({val, j});
            solve(j, val, v, arr, vst, mp);
        }
    }
}

void saim()
{
    int n;
    cin>>n;
    vector<int> arr[n+1];
    map<pair<int,int>, pair<int,int>>mp;
    for(int i=1; i<n; i++)
    {
        int a,b, c, d;
        cin>>a>>b>>c>>d;
        arr[a].push_back(b);
        arr[b].push_back(a);
        mp[{a,b}] = {c,d};
    }
    bool vst[n+1];
    memset(vst, false, sizeof(vst));
    vector<pair<int,int>>v;
    v.push_back({1,1});
    solve(1, 1, v, arr, vst, mp);
    sort(v.begin(), v.end());
    map<int,int>ans;
    for(int i=1; i<=n; i++)
    {
        int p = v[i-1].first;
        int val = v[i-1].second;
        ans[val] = i;
    }
    for(auto [val, p]: ans)
    {
        cout<<p<<" ";
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