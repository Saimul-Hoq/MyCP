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
    sort(arr, arr+n);
    
    long long ans = 0;
    if(n%2==1)
    {
        int k = ((n+1)/2)-1;
        for(int i=0; i<n; i++)
        {
            if(i!=k)
            {
                ans+=abs(arr[i]-arr[k]);
            }
        }
    }
    else
    {
        int k = n/2;
        long long val1=0, val2=0;
        for(int i=0; i<n; i++)
        {
            if(i!=k)
            {
                val1+=abs(arr[k]-arr[i]);
            }
            if(i!=(k-1))
            {
                val2+=abs(arr[k-1]-arr[i]);
            }
        }

        ans = min(val1, val2);

    }

    cout<<ans<<endl;

    
    
    return 0;
}