#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int check_kth_bit_on_or_off(int n, int k)
{
    return (n>>k)&1;
}

int turn_on_kth_bit(int n, int k)
{
    return (1<<k)|n;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        int count=0;
        for(int k=30; k>=0; k--)
        {
            for(int val: arr)
            {
                if(check_kth_bit_on_or_off(val, k)==0)
                {
                    count++;
                }
            }
            if(count<=p)
            {
                for(int i=0; i<n; i++)
                {
                    arr[i] = turn_on_kth_bit(arr[i], k);
                }
                p-=count;
                
            }
            if(p==0)
            {
                break;
            }
            count=0;
        }

        int ans = arr[0];
        for(int i=1; i<n; i++)
        {
            ans = ans&arr[i];
        }

        cout<<ans<<endl;

    }

    
    
    return 0;
}