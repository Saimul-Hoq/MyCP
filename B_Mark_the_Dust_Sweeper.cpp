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
        int indx;
        long long sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        sum-=arr[n-1];
        if(sum==0)
        {
            cout<<0<<endl;
            continue;
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i]!=0)
            {
                indx=i;
                break;
            }
        }
        for(int i=indx+1; i<n-1; i++)
        {
            if(arr[i]==0)
            {
                sum++;
            }
        }
        cout<<sum<<endl;
    }

    
    
    return 0;
}