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
        int h;
        cin>>n>>h;
        pair<int, int> val;
        int val1=-1;
        double mx = -1;
        while(n--)
        {
            int time;
            int damage;
            cin>>time>>damage;
            if(time==1 && mx<damage)
            {
                mx = damage;
                val.first = damage;
                val.second = 1;
                val1 = damage;
            }
            else if(time==2 && mx<(damage*1.0/2))
            {
                mx = (damage*1.0/2);
                val.first = damage;
                val.second = 2;
            }
            else if(time==1 && damage>val1)
            {
                val1=damage;
            }
        }

        if(val.second == 1)
        {
            cout<<((h+val.first-1)/val.first)<<endl;
        }
        else
        {
            int d = ((h+val.first-1)/val.first);
            d--;
            h -= val.first*d;
            
            if(val1!=-1 && h<=val1)
            {
                cout<<2*d+1<<endl;
            }
            else
            {
                d++;
                cout<<2*d<<endl;
            }
        }
    }

    
    
    return 0;
}