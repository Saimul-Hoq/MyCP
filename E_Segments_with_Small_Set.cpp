#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    long long ans = 0;
    map<int,int>mp;
    int l=0, r=0;
    while(r<n)
    {
        mp[arr[r]]++;

        if(mp.size()<=k)
        {
            ans+=(r-l+1);
        }
        else
        {
            while(mp.size()>k && l<=r)
            {
                mp[arr[l]]--;
                if(mp[arr[l]]==0)
                {
                    mp.erase(arr[l]);
                }
                l++;
            }
            ans+=(r-l+1);
        }
        r++;
    }
    cout<<ans<<endl;

    
    
    return 0;
}