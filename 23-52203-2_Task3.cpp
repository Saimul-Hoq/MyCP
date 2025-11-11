#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter any string: ";
    cin>>s;
    int count=0;

    for(int j=0; j<s.size(); j++)
    {
        if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
        {
            count++;
        }
    }
    cout<<"There are "<<count<<" vowels in the string.";
    return 0;
}