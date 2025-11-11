#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int left_indx(int k, deque<int>&arr)
{
    int n = arr.size();
    int l=0, r=n-1, ans=-1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(arr[mid]>=k)
        {
            ans = mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }

    return ans;
}

int right_indx(int k, deque<int>&arr)
{
    int n = arr.size();
    int l=0, r=n-1, ans=-1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(arr[mid]<=k)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
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
        int n,l,r;
        cin>>n>>l>>r;
        deque<int>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        ll ans = 0;
        while(!arr.empty())
        {
            int val = arr.front();
            arr.pop_front();
            int left = left_indx((l-val), arr);
            int right = right_indx((r-val), arr);
            
            if(!(left==-1 || right==-1 || left>right))
            {
                ans+=(right-left+1);
            }
        }
        cout<<ans<<endl;
        

    }

    
    
    return 0;
}