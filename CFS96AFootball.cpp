#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int i=0, count=1, n=0;
    for(int j=i+1; j<s.size(); j++)
    {
        if(s[i]==s[j])
        {
            count++;
        }
        else
        {
            i=j;
            count=1;
        }
        if(count==7)
        {
            n++;
        }

    }
    if(n>=1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}