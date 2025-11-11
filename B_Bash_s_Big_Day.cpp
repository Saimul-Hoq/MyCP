#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

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
    map<int,set<int>>mp;
    for(int i=0; i<n; i++)
    {
        int val = arr[i];
    
        int k=2; 
        while(k*k<=val)
        {
            if(val%k==0)
            {
                val/=k;
                mp[k].insert(i);
            }
            else
            {
                k++;
            }
        }
        if(val>1)
        {
            mp[val].insert(i);
        }
    }
    int ans = INT_MIN;
    for(auto [val, f]: mp)
    {
        int sz = f.size();
        ans = max(ans, sz);
    }
    if(ans==INT_MIN)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }

    
    
    return 0;
}