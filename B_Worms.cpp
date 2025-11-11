#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int solve(int key, int n, vector<int>&arr)
{
    int l=1, r=n, ans=-1;
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
    
    int n;
    cin>>n;
    vector<int>arr(n+1);
    for(int i=1; i<=n; i++)
    {
        int val;
        cin>>val;
        arr[i] = arr[i-1] + val;
    }
    int m;
    cin>>m;
    while(m--)
    {
        int key;
        cin>>key;
        cout<<solve(key, n, arr)<<endl;
    }

   

    
    
    return 0;
}   