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
        int a[n], b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(2*a[i]>=b[i] && 2*b[i]>=a[i])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    
    
    return 0;
}