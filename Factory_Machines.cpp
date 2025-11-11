#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;


int n, t;
vector<int>arr;

bool cnt(ll s)
{
    ll count=0;
    for(int i=0; i<n; i++)
    {
        count+=(s/arr[i]);
        if(count>=t)
        {
            return true;
        }
    }
    return false;
}

ll solve(ll l, ll r)
{
    ll ans = 0;
    while(l<=r)
    {
        ll mid = l + (r-l)/2;
        if(cnt(mid))
        {
            ans = mid;
            r = mid-1;
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
    
    
    cin>>n>>t;
    
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }

    int mx = *max_element(arr.begin(), arr.end());
    ll l = 1, r = 1LL*mx*t;
    cout<<solve(l, r)<<endl;

    
    
    return 0;
}