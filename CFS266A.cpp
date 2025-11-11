#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int p=s.size(), i=0, count=0;

    for(int j=i+1; j<p; j++)
    {
        if(s[i]==s[j])
        {
            count++;
            i=j;
        }
        else
        {
            i=j;
        }
    }

    cout<<count<<endl;
    return 0;
    
}