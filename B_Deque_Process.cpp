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
        deque<int>d;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            d.push_back(val);
        }

        string s="";
        int a = 0;
        while(!d.empty())
        {
            if(a==0)
            {
                if(d.front()<d.back())
                {
                    s+="L";
                    d.pop_front();
                }
                else
                {
                    s+="R";
                    d.pop_back();

                }
                a=1;
            }
            else if(a==1)
            {
                if(d.front()>d.back())
                {
                    s+="L";
                    d.pop_front();
                }
                else
                {
                    s+="R";
                    d.pop_back();

                }
                a=0;
            }
        }

        cout<<s<<endl;
    }
    
    
    return 0;
}