#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int solve(int k, int n, vector<int>&arr)
{
    int l=0, r=n-1, ans=-1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(arr[mid]==k)
        {
            ans = mid;
            r = mid-1;
        }
        else if(k>arr[mid])
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }

    return ans;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int c = 1;
    while(1)
    {
        int n,q;
        cin>>n>>q;
        if(n==0 && q==0)
        {
            break;
        }
        vector<int>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        cout<<"CASE# "<<c<<":"<<endl;
        while(q--)
        {
            int k;
            cin>>k;
            int ans = solve(k, n, arr);
            
            if(ans==-1)
            {
                cout<<k<<" not found"<<endl;
            }
            else
            {
                cout<<k<<" found at "<<ans+1<<endl;
            }
        }

        c++;
    }

    
    
    return 0;
}