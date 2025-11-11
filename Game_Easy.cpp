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
        vector<int>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr.rbegin(), arr.rend());

        for(int i=1; i<=2*n; i++)
        {
            int k=i;
            int sum=0;
            int x=0;
            
            int j;
            for(j=0; j<n && k>0; j++)
            {
                sum+=arr[j];
                x++;
                k--;
            }
            x--;
            j--;
            for(int i=j; i>=0 && k>0; i--)
            {
                sum+=x;
                x--;
                k--;
            }
                
            cout<<sum<<" ";
        }
        cout<<endl;
    }

    
    
    return 0;
}