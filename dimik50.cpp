#include<iostream>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string str;
        cin>>str;

        for(int i=0; i<str.length(); i++)
        {
            if(str[i]=='L')
            {
                str[i]=str[i-1];
            }
            else if(str[i]=='R')
            {
                str[i]=str[i+1];
            }
        }

        cout<<str<<endl;
    }

    return 0;
}