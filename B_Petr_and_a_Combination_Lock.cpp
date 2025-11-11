//Bitmask solution: 

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    bool check=false;
    for(int i=0; i<(1<<n); i++)
    {
        int sum=0;
        for(int k=0; k<n; k++)
        {
            if(((i>>k)&1)==1)
            {
                sum+=arr[k];
            }
            else
            {
                sum-=arr[k];
            }

        }
        if(sum%360==0)
        {
            check=true;
            break;
        }
    }

    if(check)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    
    
    return 0;
}