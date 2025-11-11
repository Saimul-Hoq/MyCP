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
        string s;
        cin>>s;
        char ans='9';
        for(int i=0; i<s.size(); i++)
        {
            ans=min(ans, s[i]);
        }
        cout<<ans<<endl;
    }


    
    
    return 0;
}