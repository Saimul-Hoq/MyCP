#include<bits/stdc++.h>
using namespace std;

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
        for(int i=0, j=1; i<n-1; i++, j++)
        {
            if(a[i]>b[j])
            {
                count = count + (a[i]-b[j]);
            }
        }
        count+=a[n-1];

        cout<<count<<endl;
    }
    
    
    return 0;
}