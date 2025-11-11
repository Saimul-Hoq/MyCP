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
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int count=0;
        int ans=0;
        for(int i=0;i<n; i++)
        {
            if(arr[i]==0)
            {
                count++;
            }
            else
            {
                count=0;
            }

            if(count==k)
            {
                ans++;
                count=0;
                i++;
            }
        }

        cout<<ans<<endl;
    }

    
    
    return 0;
}