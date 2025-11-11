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
        long long csum[n];
        csum[0]=arr[0];
        for(int i=1; i<n; i++)
        {
            csum[i] = csum[i-1] + arr[i];
        }
        int mx = INT_MIN;
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>mx)
            {
                mx=arr[i];
            }

            if((csum[i]-mx)==mx)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }

    
    
    return 0;
}