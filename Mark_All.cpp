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
        int a[n], b[n];
        a[n-1]=arr[n-1];
        for(int i=n-2; i>=0; i--)
        {
            a[i] = min(arr[i], a[i+1]);
        }
        int cost=arr[0];
        for(int i=1; i<n-2; i++)
        {
            int c = arr[i]+a[i+1];
            cost=min(cost,c);

        }
        cost=min(cost, arr[n-1]);

        b[0] = arr[0];
        for(int i=1; i<n; i++)
        {
            b[i] = min(arr[i], b[i-1]);
        }
        for(int i=n-2; i>0; i--)
        {
            int c = arr[i] + b[i-1];
            cost = min(cost, c);
        }

        cout<<cost<<endl;


        
    }

    
    
    return 0;
}