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
        int mx=-1;
        int total=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            total+=arr[i];
            if(arr[i]>mx)
            {
                mx=arr[i];
            }
        }
        
        int ans = INT_MIN;
        for(int x=1; x<=mx; x++)
        {
            int cost = x*n*30;
            int sell=0;
            for(int i=0; i<n; i++)
            {
                if(x<=arr[i])
                {
                    sell+=(x*50);
                }
                else
                {
                    sell+=(arr[i]*50);
                }
            }
            int profit = sell - cost;
            ans = max(ans, profit);
        }

        cout<<ans<<endl;
       

    }

    
    
    return 0;
}