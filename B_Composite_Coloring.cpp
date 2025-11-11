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
        vector<int>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        map<int, vector<int>>mp;
        for(int i=0; i<n; i++)
        {
            int val = arr[i];

            int k=2;
            while(k*k<=val)
            {
                if(val%k==0)
                {
                    mp[k].push_back(i);
                    val/=k;
                    break;
                }
                else
                {
                    k++;
                }
            }
            if(val==arr[i])
            {
                mp[val].push_back(i);
            }
        }
        vector<int>ans(n);
        int c=1;
        for(auto [val, v]: mp)
        {
            
            for(int i: v)
            {
                ans[i]=c;
            }
            c++;
           
        }
        c--;
        cout<<c<<endl;
        for(int val: ans)
        {
            cout<<val<<" ";
        }
        cout<<endl;


    }

    
    
    return 0;
}