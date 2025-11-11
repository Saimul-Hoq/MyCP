#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

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
    int l=0, r=0;
    set<int>s;
    multiset<int>ms;
    ll ans = 0;
    while(r<n)
    {
        int val = arr[r];
        s.insert(val);
        ms.insert(val);
        if(s.size()<=k)
        {
            ans+=(r-l+1);
        }
        else
        {
            while(s.size()>k)
            {
                ms.erase(ms.find(arr[l]));
                
                if(ms.find(arr[l])==ms.end())
                {
                    s.erase(s.find(arr[l]));
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