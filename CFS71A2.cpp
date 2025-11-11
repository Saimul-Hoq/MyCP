#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;

    for(int i=0; i<n; i++)
    {
        cin>>str[i];
    }
    
    for(int i=0; i<n; i++)
    {
        int s = str[i].size();
        string s1=str[i];

        if(s>10)
        {
            cout<<s1[0]<<s-2<<s1[s-1]<<endl;
            
        }
        if(s<=10)
        {
            cout<<s1<<endl;
        }
    }

    return 0;
}
