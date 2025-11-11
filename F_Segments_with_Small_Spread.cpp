#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    long long k;
    cin>>n>>k;
    long long arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    multiset<long long>ms;
    int l=0, r=0;
    long long ans = 0;
    while(r<n)
    {
        ms.insert(arr[r]);

        auto ia = ms.begin();
        long long a = *ia;
        auto ib = ms.end();
        ib--;
        long long b = *ib;
        if(abs(a-b)<=k)
        {
            ans+=(r-l+1);
        }
        else
        {
            auto bg = ms.begin();
            auto ed = ms.end();
            ed--;
           
            while(abs(*bg-*ed)>k && l<=r)
            {
                auto fd = ms.find(arr[l]);
                l++;
                ms.erase(fd);
                bg = ms.begin();
                ed = ms.end();
                ed--;
            }
            ans+=(r-l+1);
           
        }
        r++;
    }

    cout<<ans<<endl; 
    
    return 0;
}