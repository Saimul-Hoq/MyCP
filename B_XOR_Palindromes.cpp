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
        string s;
        cin>>s;
        vector<int>arr(n+1, 0);
        int count=0;
        for(int i=0, j=n-1; i<j; i++,j--)
        {
            if(s[i]!=s[j])
            {
                count++;
            }
        }

        int p = n-count*2;
        p=p/2;
        p++;
        for(int i=1, j=count; i<=p; i++, j+=2)
        {
            arr[j]=1;
        }
        if(n%2==1)
        {
            int i;
            for(i=0; i<=n; i++)
            {
                if(arr[i]==1)
                {
                    break;
                }
            }
            for(; i<n; i+=2)
            {
                if(arr[i]==1 && (i+1)<=n)
                {
                    arr[i+1]=1;
                }
            }
        }

        for(int val: arr)
        {
            cout<<val;
        }
        cout<<endl;

    }

    
    
    return 0;
}