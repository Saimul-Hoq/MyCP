#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int solve(int key, int n, vector<int>&carr)
{
    int l=1, r=n, ans=-1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(carr[mid]>key)
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
        int n,q;
        cin>>n>>q;
        vector<ll>arr(n+1);
        vector<int>carr(n+1);
        for(int i=1; i<=n; i++)
        {
            int val;
            cin>>val;
            carr[i] = max(carr[i-1], val);
            arr[i] = arr[i-1] + val;
        }
        while(q--)
        {
            int k;
            cin>>k;
            int indx = solve(k, n+1, carr);
            if(indx==-1)
            {
                cout<<arr[n]<<" ";
            }
            else
            {
                indx--;
                cout<<arr[indx]<<" ";
            }
            
        }
        cout<<endl;
    }

    
    
    return 0;
}