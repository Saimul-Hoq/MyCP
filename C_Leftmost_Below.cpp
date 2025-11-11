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
        int carr[n];
        carr[0] = arr[0];
        for(int i=1; i<n; i++)
        {
            carr[i] = min(carr[i-1], arr[i]);
        }
        bool check = true;
        for(int i=n-1; i>=1; i--)
        {
            if(arr[i]>=2*carr[i-1])
            {
                check=false;
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
    }

    
    
    return 0;
}   