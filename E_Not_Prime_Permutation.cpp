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
        if(n<=2)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(arr[i]==1)
                {
                    cout<<3<<" ";
                }
                else if(arr[i]==3)
                {
                    cout<<1<<" ";
                }
                else
                {
                    cout<<arr[i]<<" ";
                }
            }
            cout<<endl;
        }
    }

    
    
    return 0;
}