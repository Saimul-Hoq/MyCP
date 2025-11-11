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
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        int ans, xr=0, i;

        for(i=0; i<=255; i++)
        {
            for(int val: arr)
            {
                int temp = val^i;
                xr = xr^temp;
            }
            if(xr==0)
            {
                ans = i;
                break;
            }
            xr=0;
        }
        if(i==256)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }

    
    
    return 0;
}