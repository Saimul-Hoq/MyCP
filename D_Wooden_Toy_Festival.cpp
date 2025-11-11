#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;



bool isPossible(int t, int n, vector<int>&arr)
{
    int x = arr[0]+t;
    int count=1;
    for(int i=1; i<n; i++)
    {
        if(abs(x-arr[i])>t)
        {
            x = arr[i] + t;
            count++;
            if(count>3)
            {
                return false;
            }
        }
    }
    return true;
}

int solve(int l, int r, int n, vector<int>&arr)
{
    int ans;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(isPossible(mid, n, arr))
        {
            ans = mid;
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }

    return ans;
}


int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        sort(arr.begin(), arr.end());

        int l=0, r=1e9;
        cout<<solve(l,r,n,arr)<<endl;


    }

    
    
    return 0;
}