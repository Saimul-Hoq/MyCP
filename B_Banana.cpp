#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        s.replace(s.size()-2, 2, "i");
        cout<<s<<endl;
    }
    
    
    return 0;
}
