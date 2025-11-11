#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int solve(int key, int n, vector<int>&arr)
{
    int l=0, r=n-1, ans=-1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(arr[mid]<=key)
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
    

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int q;
    cin>>q;
    while(q--)
    {
        int key;
        cin>>key;
        cout<<solve(key, n, arr)+1<<endl;

    }
    
    
    return 0;
}