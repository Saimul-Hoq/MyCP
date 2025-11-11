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
        int n,x;
        cin>>n>>x;
        string s;
        cin>>s;
        bool check = true;
        if(s[0]=='0')
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int count=0;
            for(int i=0; i<n; i++)
            {
                if(s[i]=='0')
                {
                    count++;
                }
                else
                {
                    count=0;
                }
                if(count>x)
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
        
    }

    
    
    return 0;
}