#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin>>n>>m;
    multiset<int>ms;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        ms.insert(val);
    }
    int arr[m];
    for(int i=0; i<m; i++)
    {
        cin>>arr[i];
    }
    

    for(int i=0; i<m; i++)
    {
        if(ms.empty())
        {
            cout<<-1<<endl;
            
        }
        else
        {
            int p = arr[i];
            auto iq = ms.lower_bound(p);
            
           
        
            if(iq!=ms.end() && p==*iq)
            {
                cout<<p<<endl;
                ms.erase(iq);
            }     
            else
            {
                
                if(iq==ms.end())
                {
                    iq--;
                }
                while(iq!=ms.begin() && *iq>p)
                {
                    iq--;
                    
                }
                if(iq==ms.begin() && *iq>p)
                {
                    cout<<-1<<endl;
                }
                else
                {
                    cout<<(*iq)<<endl;
                    ms.erase(iq);
                }

            }
        }
    }
        

    
    
    return 0;
}