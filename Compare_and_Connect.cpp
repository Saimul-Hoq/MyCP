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
        int n,m;
        cin>>n>>m;
        string s = "";
        if(n!=0 && m!=0)
        {
            n = 2*n-1;
            for(int i=0; i<n; i++)
            {
                s+="<";
            }
            for(int i=0; i<m; i++)
            {
                s+="<>";
            }
        }
        else if(n==0)
        {
            m-=2;
            for(int i=0; i<m; i++)
            {
                s+="><";
            }
            s+=">=>";
        }
        else
        {
            n-=2;
            for(int i=0; i<n; i++)
            {
                s+="<<";
            }
            s+="<=<";
        }

        cout<<s<<endl;
    }

    
    
    return 0;
}