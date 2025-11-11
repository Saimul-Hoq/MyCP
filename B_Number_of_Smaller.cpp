#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    int n,m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    int count=0;
    int ia=0;
    for(int ib=0; ib<m; ib++)
    {
        for(; ia<n; ia++)
        {
            if(a[ia]<b[ib])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout<<count<<" ";
    }
    cout<<endl;
    
    
    return 0;
}