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
        int n,k;
        cin>>n>>k;
        int a[n], b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        long long prefix[n+1];
        long long result[n+1];
        for(int i=0; i<n; i++)
        {
            prefix[a[i]] = b[i];
        }
        result[1]=0;
        long long sum=prefix[1];
        multiset<int>ms;
        ms.insert(prefix[1]);
        int x=1;
        for(int i=2; i<=n; i++)
        {
            result[i] = sum;

            int val = prefix[i];
            ms.insert(val);
            if(ms.size()>k)
            {
                if(val!=*ms.begin())
                {
                    sum = sum - *ms.begin() + val;
                }
                ms.erase(ms.begin());
            }
            else
            {
                sum+=val;
            }
        }

        for(int i=0; i<n; i++)
        {
            cout<<result[a[i]]<<" ";
        }
        cout<<endl;
    }

    
    
    return 0;
}