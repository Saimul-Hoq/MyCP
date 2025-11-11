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
        map<int,int>row;
        map<int,int>col;
        for(int i=0; i<n; i++)
        {
            int a,b;
            cin>>a>>b;
            row[a]++;
            col[b]++;
        }
        long long a, b;
        auto ia = row.end();
        ia--;
        a = ia->first;
        int fa = ia->second;
        auto ib = col.end();
        ib--;
        b = ib->first;
        int fb = ib->second;
        if(fa==1)
        {
            ia--;
            a = ia->first;
            auto bg = row.begin();
            int g = bg->first;
            long long r = abs(g-a);
            bg = col.begin();
            g=bg->first;
            long long c = abs(g-b);
            if(r*c==n-1)
            {
                c++;
                
            }
            cout<<r*c<<endl;
        }
        else
        {
            if(fb==1)
            {
                ib--;
                b=ib->first;
                auto bg = col.begin();
                int g = bg->first;
                long long c = abs(g-b);
                bg = row.begin();
                g=bg->first;
                long long r = abs(g-a);
                if(r*c==n-1)
                {
                    r++;
                    
                }
                cout<<r*c<<endl;
            }
            else
            {
                auto bg = row.begin();
                long long g = bg->first;
                long long r = abs(g-a);
                bg = col.begin();
                g = bg->first;
                long long c = abs(g-b);
                cout<<r*c<<endl;
            }
        }
    }

    
    
    return 0;
}