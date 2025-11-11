#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        map<int,int>mp;
        vector<int>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        bool check=true;
        for(auto [v, f]: mp)
        {
            if(f%k!=0)
            {
                check=false;
                break;
            }
            else
            {
                mp[v] = mp[v]/k;
            }
        }
        if(!check)
        {
            cout<<0<<endl;
        }
        else
        {
            ll ans=0;
            int l=0,r=0;
            map<int,int>cur;
            while(r<n)
            {
                cur[arr[r]]++;
                while(cur[arr[r]]>mp[arr[r]])
                {
                    cur[arr[l]]--;
                    l++;
                }
                ans+=(r-l+1);
                r++;
            }
            cout<<ans<<endl;
        }

    }

    
    
    return 0;
}