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

        int ans = INT_MAX;
        for(int i=0; i<n-1; i++)
        {
            int temp = arr[i] + (arr[i+1]/2);
            ans = min(ans, temp);
        }
        sort(arr, arr+n);
        int temp = arr[0] + arr[1];
        ans = min(ans, temp);

        cout<<ans<<endl;
    }
    
    
    return 0;
}