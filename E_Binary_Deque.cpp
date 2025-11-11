#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int sum=0, ans=-1;
        int l=0, r=0;
        while(r<n)
        {
            sum+=arr[r];

            if(sum==s)
            {
                ans = max(ans, r-l+1);
            }
            while(sum>s && l<=r)
            {
                sum-=arr[l];
                l++;
            }
            r++;
        }
        if(ans==-1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<n-ans<<endl;
        }
    }
    
    
    return 0;
}