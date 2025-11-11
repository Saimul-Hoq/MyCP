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
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    long long sum=0;
    int ans=INT_MAX;
    int l=0, r=0;
    while(r<n)
    {
        sum+=arr[r];

        if(sum>=k)
        {
            ans = min(ans, r-l+1);

            while(sum>=k && l<=r)
            {
                ans = min(ans, r-l+1);
                sum-=arr[l];
                l++;
            }

        }
        r++;
    }
    if(ans==INT_MAX)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }

    
    
    return 0;
}