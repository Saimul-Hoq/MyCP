#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string line;
        cin>>line;
        int size=line.length();

        if(size>10)
        {
            cout<<line[0]<<size-2<<line[size-1]<<endl;
        }
        else
        {
            cout<<line<<endl;
        }
    }
    return 0;
}


/*int main()
{
    int n, s;
    cin>>n;
    string str[n];

    for(int i=0; i<n; i++)
    {
        cin>>str[i];
    }

    for(int i=0; i<n; i++)
    {
        s = str[i].size();
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
}*/
