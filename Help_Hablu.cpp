#include<bits/stdc++.h>
using namespace std;


int c;
string s;
string t;

void count(int si, int ti)
{
    if(ti==3)
    {
        c++;
        return;
    }
    
    for(int i=si; i<s.size(); i++)
    {
        if(s[i]==t[ti])
        {  
            count(i+1, ti+1);   
        }
    }
}

int main()
{
    int r;
    cin>>r;
    while(r--)
    {   
        cin>>s>>t;
        c=0;
        count(0, 0);

        cout<<c<<endl;
    }
    return 0;
}