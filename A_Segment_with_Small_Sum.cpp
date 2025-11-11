#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    int n;
    long long s;
    cin>>n>>s;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int ans=0;
    long long sum=0;
    int l=0, r=0;
    while(r<n)
    {
        sum+=arr[r];
        if(sum<=s)
        {
            ans = max(ans, r-l+1);
        }
        else
        {
            sum-=arr[l];
            l++;
        }
        r++;
    }
    cout<<ans<<endl;
    
    
    return 0;
}