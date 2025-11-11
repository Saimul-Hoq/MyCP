#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int n;

void solve(int i, int a, int b, map<pair<int,int>, int>&mp, vector<int> arr[], bool flag[])
{
    flag[i] = true;

    for(int j: arr[i])
    {
        if(!flag[j])
        {
            
            mp[{min(i,j), max(i,j)}] = a;
            solve(j, b, a, mp, arr, flag);
            swap(a,b);
        }
    }
}

void saim()
{
    cin>>n;
    map<pair<int,int>, int>mp;
    vector<int> arr[n+1];
    vector<pair<int,int>>v;
    for(int i=1; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
        v.push_back({min(a,b), max(a,b)});
    }
    bool flag[n+1];
    memset(flag, false, sizeof(flag));
    for(int i=1; i<=n; i++)
    {
        if(arr[i].size()>=3)
        {
            cout<<-1<<endl;
            return;
        }
    }

    solve(1, 2, 5, mp, arr, flag);
    for(auto [a,b]: v)
    {
        cout<<mp[{a,b}]<<" ";
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