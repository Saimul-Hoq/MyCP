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
        long long n;
        cin>>n;
        int k = __lg(n);
        vector<long long>v;
        for(; k>=0; k--)
        {
            if(((n>>k)&1)==1)
            {
                long long p = n - (1LL<<k);
                if(p!=0)
                {
                    v.push_back(p);
                }
            }
        }
        v.push_back(n);
        cout<<v.size()<<endl;
        for(long long val: v)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }

    
    
    return 0;
}