#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;
    for(int cs=1; cs<=t; cs++)
    {
        int n, k;
        cin>>n>>k;
        
        int x[n], y[n];

        for(int i=0; i<n; i++)
        {
            cin>>x[i];
            cin>>y[i];
        }

        long long arr[n+1];
        arr[0]=0;

        for(int i=1; i<=n; i++)
        {
            int tempx=x[i-1];
            int temp = (int)k/tempx;
            arr[i]=arr[i-1]+temp;
        }
        cout<<"Case "<<cs<<": "<<arr[n]<<endl;

    }

    return 0;
}