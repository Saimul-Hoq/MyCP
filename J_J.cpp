#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

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
        sort(arr, arr+n);
        int ans=-1;
        for(int i=0; i<n; i++)
        {
            if(arr[i]!=i)
            {
                ans=i;
                break;
            }
        }
        if(ans==-1)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }

    
    
    return 0;
}