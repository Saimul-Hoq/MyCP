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
        int arr[n+1];
        vector<int>v(1001, -1);
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            v[arr[i]]=i;
        }
        int ans=0;
        for(int i=1; i<=1000; i++)
        {
            for(int j=1; j<=1000; j++)
            {
                if(v[i]!=-1 && v[j]!=-1 && __gcd(i,j)==1)
                {
                    ans = max(ans, v[i]+v[j]);
                }
            }
        }

        if(ans==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }



    }

    
    
    return 0;
}