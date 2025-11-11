#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int n;
vector<int>arr;
int ans;

void solve(int key)
{
    int l=0, r=n-1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(arr[mid]>=key)
        {
            ans = mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int k;
    cin>>n>>k;
   

    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }
    while(k--)
    {
        int key;
        cin>>key;

        ans = n;
        solve(key);
        cout<<ans+1<<endl;

    }

    
    
    return 0;
}