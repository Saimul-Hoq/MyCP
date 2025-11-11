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
        vector<int>b(n);
        vector<int>a(n);
        map<int, vector<int>>mp;
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            mp[b[i]].push_back(i);
        }

        bool check=true;
        for(auto [freq, v]: mp)
        {
            if(v.size()%freq != 0)
            {
                check=false;
                break;
            }
        }

        if(!check)
        {
            cout<<-1<<endl;
        }
        else
        {
            int val=1;
            for(auto [freq, v]: mp)
            {
                for(int i=0; i<v.size(); i++)
                {
                    a[v[i]]=val;
                    if((i+1)%freq == 0)
                    {
                        val++;
                    }
                }
            }

            for(int k: a)
            {
                cout<<k<<" ";
            }
            cout<<endl;
        
        }

    }

    
    
    return 0;
}