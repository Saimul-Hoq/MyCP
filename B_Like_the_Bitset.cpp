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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count=0, mx=0;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                count++;
                mx=max(mx, count);
            }
            else
            {
                count=0;
            }
        }
        if(mx==0)
        {
            cout<<"YES"<<endl;
            for(int i=1; i<=n; i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else if(mx>=k)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int arr[n];
            int p=1;
            for(int i=0; i<n; i++)
            {
                if(s[i]=='1')
                {
                    arr[i] = p;
                    p++;
                }
            }
            for(int i=0; i<n; i++)
            {
                if(s[i]=='0')
                {
                    arr[i] = p;
                    p++;
                }
            }
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }

    
    
    return 0;
}