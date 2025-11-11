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
        int arr[n];
        long long sum = 0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=abs(arr[i]);
        }
        int count=1, acount=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>0)
            {
                count=1;
            }
            else if(arr[i]<0)
            {
                acount+=count;
                count=0;
            }
        }
        cout<<sum<<" "<<acount<<endl;

    }
    
    
    return 0;
}