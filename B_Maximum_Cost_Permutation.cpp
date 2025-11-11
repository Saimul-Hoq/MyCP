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
        vector<int>arr(n+1);
        vector<int>carr(n+1);
        int mn=-1, mx=-1;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            carr[arr[i]]=1;

            if(arr[i]==0)
            {
                mx=i;
                if(mn==-1)
                {
                    mn=i;
                }
            }
        }
        if(carr[0]==1)
        {
            int i=n; 
            for(; i>=1; i--)
            {
                if(carr[i]==0)
                {
                    break;
                }
            }
            arr[mn]=i;
            if(mn!=mx)
            {
                i=1;
                for(; i<=n; i++)
                {
                    if(carr[i]==0)
                    {
                        break;
                    }
                }
                arr[mx]=i;
            }
        }

        int l=0, r=-1;
        for(int i=1; i<=n; i++)
        {
            if(arr[i]!=i)
            {
                l=i;
                break;
            }
        }
        for(int i=n; i>=1; i--)
        {
            if(arr[i]!=i)
            {
                r=i;
                break;
            }
        }
        cout<<r-l+1<<endl;
    }

    
    
    return 0;
}