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
        vector<int>arr(2);
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            if(val==-1)
            {
                arr[1]++;
            }
            else if(val==0)
            {
                arr[0]++;
            }
        }
        if(arr[1]%2==0)
        {
            cout<<arr[0]<<endl;
        }
        else
        {
            cout<<arr[0]+2<<endl;
        }

    }

    
    
    return 0;
}