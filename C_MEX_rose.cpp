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
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            mp[val]++;
        }
        int a = mp[k], b=0;
        for(int i=0; i<k; i++)
        {
            if(mp[i]==0)
            {
                b++;
            }
        }

        if(b>=a)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<a<<endl;
        }
    }

    
    
    return 0;
}