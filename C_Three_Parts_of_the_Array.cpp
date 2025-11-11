#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int l=0, r=n-1;
    long long sum1=arr[l], sum2=arr[r], ans=0;
    
    while(l<r)
    {
        while(sum1<sum2 && l<r)
        {
            l++;
            sum1+=arr[l];
            
        }
        while(sum2<sum1 && l<r)
        {
            r--;
            sum2+=arr[r];
           
        }
        while(sum1==sum2 && l<r)
        {
            ans=max(ans, sum1);
            l++;
            sum1+=arr[l];
            r--;
            sum2+=arr[r];
            
        }
    }

    cout<<ans<<endl;    
    
    return 0;
}