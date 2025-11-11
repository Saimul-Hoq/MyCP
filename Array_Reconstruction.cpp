#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long sum, sumarr=0;
        cin>>n;
        int arr[n-2];
        for(int i=0; i<n-2; i++)
        {
            cin>>arr[i];
            sumarr+=arr[i];
        }
        cin>>sum;
        cout<<sum-sumarr+1<<endl;
    }
    
    
    return 0;
}