#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

long long power(long long n, long long p)
{
    long long ans = 1;
    for(int i=1; i<=p; i++)
    {
        ans = ans*n %  998244353;
    }

    return ans;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int arr[n];
        memset(arr, 0, sizeof(arr));
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            arr[val]++;
        }

        bool flag = true;

        for(int i=0, j=n-1; i<=j; i++, j--)
        {
            if(arr[i]+arr[j] != 2)
            {
                flag=false;
                break;
            }
        }

        if(!flag)
        {
            cout<<0<<endl;
        }
        else
        {
            n = n/2;
            long long ans = power(2,n);
            cout<<ans<<endl;
        }
    }

    
    
    return 0;
}