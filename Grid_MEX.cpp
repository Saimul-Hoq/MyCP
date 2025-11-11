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
        if(n==1)
        {
            cout<<0<<endl;
            
        }
        else
        {
            int arr[n][n];
            memset(arr, 0, sizeof(arr));
            for(int r = 0; r<n; r++)
            {
                int k=1;
                for(int c=r+1; c<n; c++)
                {
                    arr[r][c] = k;
                    k++;
                }
                k=n-1;
                for(int c=r-1; c>=0; c--)
                {
                    arr[r][c] = k;
                    k--;
                }
            }

            for(int r=0; r<n; r++)
            {
                for(int c=0; c<n; c++)
                {
                    cout<<arr[r][c]<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
        }
            
    }

    
    
    return 0;
}