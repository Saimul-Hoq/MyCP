#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

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
        int i;
        for(i=1; i<n; i++)
        {
            if(arr[i-1]>arr[i])
            {
                cout<<i<<" "<<i+1<<endl;
                break;
            }
        }
        if(i==n)
        {
            cout<<-1<<endl;
        }
    }

    
    
    return 0;
}