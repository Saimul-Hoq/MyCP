#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int t; 
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        for(int i=n-3; i>=0; i--)
        {
            arr[n-2]-=arr[i];
        }

        arr[n-1]-=arr[n-2];

        cout<<arr[n-1]<<endl;


    }

    return 0;
}