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
    long long ans=1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>ans)
        {
            break;
        }
        else
        {
            ans+=arr[i];
        }
    }

    cout<<ans<<endl;

    
    
    return 0;
}