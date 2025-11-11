#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            int imd, cost;
            cin>>imd>>cost;
            if(mp.count(cost))
            {
                if(mp[cost]<imd)
                {
                    mp[cost]=imd;
                }
            }
            else
            {
                mp[cost]=imd;
            }
        }
        bool check=false;
        for(auto [cost, imd]: mp)
        {
            if(imd>=7)
            {
                cout<<cost<<endl;
                check=true;
                break;
            }
        }
        if(!check)
        {
            cout<<-1<<endl;
        }
    }
    
    
    return 0;
}