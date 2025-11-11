#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, word;
    getline(cin, s);

    stringstream ss(s);
    int check = 0;

    while(ss >> word)
    {
        if(word == "Jessica")
        {
            check=1;
            break;
        }
    }

    if(check==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;


}