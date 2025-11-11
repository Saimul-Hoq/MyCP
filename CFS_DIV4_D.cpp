#include<iostream>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string a, b;
        cin>>a>>b;

        int i,j=0;
        for(i=0; i<a.length() && j<b.length(); i++)
        {
            if(a[i]==b[j])
            {
                j++;
            }
            else if(a[i]=='?')
            {
                a[i]=b[j];
                j++;
            }
        }

        if(j==b.length())
        {
            cout<<"YES"<<endl;
            for(; i<a.length(); i++)
            {
                if(a[i]=='?')
                {
                    a[i]='a';
                }
            }
            cout<<a<<endl;
        }
        else if(j<b.length())
        {
            cout<<"NO"<<endl;
        }
        
    }

    return 0;
}