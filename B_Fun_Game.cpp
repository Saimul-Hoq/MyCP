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
        cin>>n;
        string s,t;
        cin>>s>>t;
        bool check=true;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                break;
            }
            else if(s[i]!=t[i])
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