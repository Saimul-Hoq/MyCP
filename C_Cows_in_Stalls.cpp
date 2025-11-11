#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int n,k;
vector<int>arr;

bool isPossible(int d)
{
    int count=1;
    int x=arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]-x >= d)
        {
            count++;
            x=arr[i];
            if(count==k)
            {
                return true;
            }
        }
    }
    return false;
}

int solve(int l, int r)
{
    int ans;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(isPossible(mid))
        {
            ans = mid;
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }

    return ans;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }

    int l=0, r=1e9;
    cout<<solve(l,r)<<endl;
    
    
    return 0;
}