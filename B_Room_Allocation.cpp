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
        long long ans = 0;
        for(int val: arr)
        {
            if(val%2==0)
            {
                ans+=(val/2);
            }
            else
            {
                ans+=(val/2 + 1);
            }
        }
        cout<<ans<<endl;
    }

    
    
    return 0;
}