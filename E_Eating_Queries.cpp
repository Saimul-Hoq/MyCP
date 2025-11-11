#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int left_index(int n, vector<ll>&arr, ll key)
{
    int ans = -2;
    int l=0, r=n-1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(arr[mid]>=key)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
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
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            v.push_back(val);
        }
        sort(v.rbegin(), v.rend());
        vector<ll>arr(n);
        arr[0] = v[0];
        for(int i=1; i<n; i++)
        {
            arr[i] = arr[i-1] + v[i];
        }
        while(q--)
        {
            ll key;
            cin>>key;
            cout<<left_index(n, arr, key)+1<<endl;
        }
    }

    
    
    return 0;
}