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
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int gun=0;
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(gun==0 && arr[i]>k)
            {
                count++;
                gun=1;
            }
            else if(gun==1 && arr[i]<=k)
            {
                count++;
                gun=0;
            }
        }
        cout<<count<<endl;
    }

    
    
    return 0;
}