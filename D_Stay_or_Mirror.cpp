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
        int arr[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        int p = 2*n;
        arr[1] = min(arr[1], (p-arr[1]));
        for(int i=2; i<=n; i++)
        {
            if(arr[i-1]>arr[i])
            {
                int l = i-1;
                int r = r-i;
                if(l>r)
                {
                    int temp = max(arr[i], (p-arr[i]));
                    if(temp>=arr[i-1])
                    {
                        arr[i] = temp;
                    }
                }
                else
                {
                    arr[i] = min(arr[i], (p-arr[i]));
                }
            }
        }

        int ans = 0;
        for(int i=1; i<n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                if(arr[i]>arr[j])
                {
                    ans++;
                }
            }
        }

        cout<<ans<<endl;
    }

    
    
    return 0;
}