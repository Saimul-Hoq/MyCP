#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int n, x;
vector<int>arr;

bool isPossible(int h)
{
    ll k=0;
    for(int i=0; i<n; i++)
    {
        k+=max(0, (h-arr[i]));
        if(k>x)
        {
            return false;
        }
    }
    return true;

}

int solve(int l, int r)
{
    int h;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(isPossible(mid))
        {
            h = mid;
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }

    return h;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        arr.clear();
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            arr.push_back(val);
        }

        int l=1, r=2e9;
        cout<<solve(l,r)<<endl;

       
    }

    
    
    return 0;
}