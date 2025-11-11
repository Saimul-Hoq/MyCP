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
        int n;
        cin>>n;
        int arr[n];
        string s;
        long long sum=0, ans=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        cin>>s;

        int l=0, r=n-1;
        while(l<r)
        {
            while(s[l]!='L' && sum>0)
            {
                sum-=arr[l];
                l++;
            }
            while(s[r]!='R' && sum>0)
            {
                sum-=arr[r];
                r--;
            }
            ans+=sum;
            sum-=arr[l];
            l++;
            sum-=arr[r];
            r--;

        }

        cout<<ans<<endl;

    }

    
    
    return 0;
}