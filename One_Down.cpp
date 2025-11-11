#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        string s,t;
        cin>>n;
        cin>>s>>t;
        int count=0;
        bool flag = false;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0' && t[i]=='1')
            {
                flag = true;
                break;
            }
        }
        if(flag)
        {
            cout<<"No"<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(s[i]=='1' && t[i]=='0')
                {
                    count++;
                }
            }
            if(count%2==0 || count==0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }

    
    
    return 0;
}