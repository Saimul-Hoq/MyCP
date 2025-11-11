#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;

        bool flag = true;

        if(a.size() != b.size())
        {
            flag = false;
        }
        else
        {
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            if(a != b)
            {
                flag = false;
            }
        }

        if(flag)
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