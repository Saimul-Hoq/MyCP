#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int n,a,b;

ll get(int k, vector<int>&arr)
{
    int l=0, r=0;
    map<int,int>mp;
    ll cnt=0;

    while(r<n)
    {
        mp[arr[r]]++;
        while(mp.size()>k)
        {
            mp[arr[l]]--;
            if(mp[arr[l]]==0) 
            {
                mp.erase(arr[l]);
            }
            l++;
        }

        int right = r-a+1;
        int left = max(l, r-b+1);
        if(l<=right)
        {
            cnt+=(right-left+1);
        }
        r++;
    }

    return cnt;

}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
   
    while(t--)
    {
        int k;
        cin>>n>>k>>a>>b;
        vector<int>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
       
        ll ans = get(k, arr) - get(k-1, arr);
        cout<<ans<<endl;
    }

    
    
    return 0;
}   