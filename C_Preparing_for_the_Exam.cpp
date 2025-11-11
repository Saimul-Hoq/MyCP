#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m, k;
        cin>>n>>m>>k;

        int arr[m], carr[k], miss=0, val;
        for(int i=0; i<m; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<k; i++)
        {
            cin>>carr[i];
            
        }
        int p, q;
        for(p=0, q=1; p<k; p++, q++)
        {
            if(carr[p]!=q)
            {
                miss=q;
                break;
            }
        }
        if(p==k)
        {
            miss = n;
        }
        if(k==n)
        {
            for(int i=0; i<m; i++)
            {
                cout<<1;
            }
            cout<<endl;
        }
        else if(k<(n-1))
        {
            for(int i=0; i<m; i++)
            {
                cout<<0;
            }
            cout<<endl;
        }
        else if(k==(n-1))
        {
            for(int i=0; i<m; i++)
            {
                if(arr[i]==miss)
                {
                    cout<<1;
                }
                else
                {
                    cout<<0;
                }
            }
            cout<<endl;
        }

    }
    
    
    return 0;
}