#include<bits/stdc++.h>
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

        int f=str.length()-1, check=1;

        for(int i=0; i<str.length()/2; i++, f--)
        {
            if(str[i]!=str[f])
            {
                check=0;
                break;
            }
        }

        if(check == 1)
        {
            cout<<"Yes! It is palindrome!"<<endl;
        }
        else
        {
            cout<<"Sorry! It is not palindrome!"<<endl;
        }
        
    }

    return 0;
}