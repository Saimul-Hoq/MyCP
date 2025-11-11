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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        int p=0;
        bool check = true;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                if(p>0)
                {
                    p--;
                }
                else
                {
                    check=false;
                    break;
                }
            }
            else
            {
                p=k;
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