#include<iostream>
#include<string>
using namespace std;


int main()
{
    string str;
    cin>>str;
    int size=str.length();
    for(int i=0; i<size-2; i+=2)
    {
        for(int j=i+2; j<size; j+=2)
        {
            if(str[i]>str[j])
            {
                swap(str[i], str[j]);
            }
        }
    }

    cout<<str<<endl;

    return 0;
}











/*int main()
{
    string s;
    cin>>s;
    int n=s.size(), i=0;
    while(i<n)
    {
        for(int j=i+2; j<n; j=j+2)
        if(s[i]>s[j])
        {
            swap(s[i], s[j]);
        }
        i=i+2;
    }
    cout<<s<<endl;
    return 0;
    
}*/