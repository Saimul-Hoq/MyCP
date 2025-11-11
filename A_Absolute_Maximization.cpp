#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int toggle(int n, int k)
{
    return ((1<<k)^n);
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
        int arr[n];
        int mx = INT_MIN;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            mx = max(mx, arr[i]);
        }
        sort(arr, arr+n);
        for(int k=0; k<=__lg(mx); k++)
        {
            if(((mx>>k)&1)==0)
            {
                for(int i=0; i<n-1; i++)
                {
                    if(((arr[i]>>k)&1)==1)
                    {
                        arr[i] = toggle(arr[i], k);
                        mx = toggle(mx, k);
                        break;
                    }
                }
            }
        }
        sort(arr, arr+n);
        int mn = arr[0];
        for(int k=0; k<=__lg(mn); k++)
        {
            if(((mn>>k)&1)==1)
            {
                for(int i=1; i<n-1; i++)
                {
                    if(((arr[i]>>k)&1)==0)
                    {
                        arr[i] = toggle(arr[i], k);
                        mn = toggle(mn, k);
                        break;
                    }
                }
            }
        }

        cout<<mx-mn<<endl;

    }
    
    
    return 0;
}