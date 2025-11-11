#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s, rs;
        cin>>s;
        for(int i=0, j=1; j<s.size(); i+=2, j+=2)
        {
            int n = s[j]-48;
            int sz = rs.size();
            rs.resize(sz+n, s[i]);
        }

        cout<<rs<<endl;
    }
    
    
    return 0;
}