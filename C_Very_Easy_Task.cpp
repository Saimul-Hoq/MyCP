#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int n,x,y;

bool isPossible(int t)
{
    ll count=0;
    if(min(x,y)>t)
    {
        return false;
    }
    t-=min(x,y);
    count++;
    count+=(t/x);
    count+=(t/y);
    
    return count>=n;
}

int solve(int l, int r)
{
    int ans;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(isPossible(mid))
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
    
    cin>>n>>x>>y;

    int l = 1, r=2e9;
    cout<<solve(l, r)<<endl;

    
    
    return 0;
}