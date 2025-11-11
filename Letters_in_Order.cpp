#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    set<char>s;
    for(int i=0; i<str.size(); i++)
    {
        s.insert(str[i]);
    }
    for(auto it = s.begin(); it!=s.end(); it++)
    {
        cout<<*it;
    }
    cout<<endl;
    
    
    return 0;
}