#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int n,k;
vector<int>arr;

bool isPossible(ll m)
{
    ll cnt=0;
    for(int i=(n/2); i<n; i++)
    {
        if((m-arr[i])>0)
        {
            cnt+=(m-arr[i]);
        }
    }
    if(cnt<=k)
    {
        return true;
    }
    else
    {
        return false;
    }
    
    
}

int solve(ll l, ll r)
{
    ll ans=0;
    while(l<=r)
    {
        ll mid = (l+r)/2;
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

    sort(arr.begin(), arr.end());

    int p = n/2;
    ll l = arr[p];
    ll r = arr[p] + k;
    cout<<solve(l,r)<<endl;
    
    
    return 0;
}