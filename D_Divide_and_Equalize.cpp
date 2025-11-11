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
        map<int,int>mp;
        for(int val: arr)
        {
            int i=2;
            while(i*i<=val)
            {
                if(val%i==0)
                {
                    mp[i]++;
                    val/=i;
                }
                else
                {
                    i++;
                }

            }
            if(val>1)
            {
                mp[val]++;
            }
        }
        bool check=true;
        for(auto [val, freq]: mp)
        {
            if(freq%n!=0)
            {
                check=false;
                break;
            }
        }

        if(check)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }

    
    
    return 0;
}