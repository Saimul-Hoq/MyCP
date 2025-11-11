#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

bool check_kth_bit(int n, int k)
{
    return ((n>>k)&1);
}

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
        int arr[n-1];
        for(int i=0; i<n-1; i++)
        {
            cin>>arr[i];
        }

        int bitarr[n][30];
        memset(bitarr, -1, sizeof(bitarr));
        int ans[n];
        memset(ans, 0, sizeof(ans));

        for(int i=0, j=1; j<n; i++, j++)
        {
            int val = arr[i];
            for(int k=29; k>=0; k--)
            {
                if(check_kth_bit(val, k))
                {
                    bitarr[i][k]=1;
                    bitarr[j][k]=1;
                }
            }
        }

        bool flag = true;

        for(int i=0, j=1; j<n; i++, j++)
        {
            int val = arr[i];
            for(int k=29; k>=0; k--)
            {
                if(!check_kth_bit(val, k) && (bitarr[i][k]==1 && bitarr[j][k]==1))
                {
                    flag = false;
                    break;
                }
            }
        }

        if(!flag)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                
                for(int j=0; j<30; j++)
                {
                    if(bitarr[i][j]==1)
                    {
                        ans[i]+=(1<<j);
                    }
                }
            }

            for(int val: ans)
            {
                cout<<val<<" ";
            }
            cout<<endl;
        }

        


    }


    
    
    return 0;
}