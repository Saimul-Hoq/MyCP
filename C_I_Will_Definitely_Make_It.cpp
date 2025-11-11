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
        k--;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int p = arr[k];
        sort(arr, arr+n);
        int i;
        for(i=0; i<n; i++)
        {
            if(arr[i]==p)
            {
                break;
            }
        }
        bool check=true;
        i++;
        for(; i<n; i++)
        {
            if(arr[i]-arr[i-1] > p)
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