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
    long long ans=0;
    int l=0, r=0;
    while(r<n)
    {
        sum+=arr[r];

    
        while(sum>=k && l<=r)
        {
            ans+=(n-r);
            sum-=arr[l];
            l++;
        }

        r++;
        
    }
    cout<<ans<<endl;

    
    
    return 0;
}