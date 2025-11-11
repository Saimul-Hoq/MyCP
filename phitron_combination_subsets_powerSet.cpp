#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int n;
vector<vector<int>>ans;

void solve(int idx, vector<int>&arr, vector<int>&v)
{
    ans.push_back(v);

    for(int i=idx; i<n; i++)
    {
        v.push_back(arr[i]);
        solve(i+1, arr, v);
        v.pop_back();
    }
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    vector<int>v;
    solve(0, arr, v);
    for(auto a: ans)
    {
        for(int val: a)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    
    
    return 0;
}