#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int n;
vector<vector<int>>ans;

void solve(int idx, vector<int>&arr)
{
    if(idx==n)
    {
        ans.push_back(arr);
        return;
    }

    for(int i=idx; i<n; i++)
    {
        swap(arr[i], arr[idx]);
        solve(idx+1, arr);
        swap(arr[i], arr[idx]);
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
    solve(0, arr);
    cout<<"Output: "<<endl;
    for(auto v: ans)
    {
        for(int i=0; i<n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    
    
    return 0;
}