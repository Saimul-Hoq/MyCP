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
        long long sum1=0, sum2=0;
        for(int i=0; i<n; i+=2)
        {
            sum1+=arr[i];
        }
        for(int i=1; i<n; i+=2)
        {
            sum2+=arr[i];
        }
        cout<<max(sum1, sum2)<<endl;
    }

    
    
    return 0;
}