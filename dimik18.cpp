#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();

    for(int k=0; k<t; k++)
    {
        string line;
        getline(cin, line);
        
        for(int i=0; i<line.length(); i++)
        {
            if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u')
            {
                cout<<line[i];
            }
        }
        cout<<endl;
        for(int i=0; i<line.length(); i++)
        {
            if(line[i]!='a' && line[i]!='e' && line[i]!='i' && line[i]!='o' && line[i]!='u' && line[i]!=' ')
            {
                cout<<line[i];
            }
        }
        cout<<endl;




    }

    return 0;
}