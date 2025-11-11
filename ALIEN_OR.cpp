#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

string makeString(int k)
{
    string ans="";
    string s="0";
    while(k--)
    {
        ans+=s;
    }
    ans.replace(0, 1, "1");
    return ans;
}

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
        set<string>s;
        string str = makeString(k);
        s.insert(str);
        for(int i=1; i<k; i++)
        {
            str.replace(i-1, 1, "0");
            str.replace(i, 1, "1");
            s.insert(str);
        }
        
        for(int i=0; i<n; i++)
        {
            string st;
            cin>>st;
            
            s.erase(st);
            
        }

        if(s.empty())
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