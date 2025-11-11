#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int n,k;


bool isPossible(int x, vector<int>&arr)
{
    int p=0, j=0;
    int count=0;
    vector<int>carr(x+1, 0);

    for(int i=0; i<n; i++)
    {
        int val = arr[i];
        if(val<x && carr[val]==j)
        {
            count++;
            carr[val]++;
        }
       
        if(count==(x))
        {
            p++;
            j++;
            count=0;
        }
    }
    
    if(p>=k)
    {
        return true;
    }
    return false;
}

void solve(vector<int>&arr)
{
    int l=0, r=2e5, ans;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        
        if(isPossible(mid, arr))
        {
            ans = mid;
           
            l = mid+1;
        }
        else
        {
            r = mid-1;
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
        cin>>n>>k;
        vector<int>arr;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            arr.push_back(val);
        }

        solve(arr);
    }

    
    
    return 0;
}