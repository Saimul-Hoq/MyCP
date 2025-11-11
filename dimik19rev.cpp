#include<iostream>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;
    cin.ignore();

    while(t--)
    {
        string line;
        getline(cin, line);

        int count=1;
        for(int i=0; i<line.length(); i++)
        {
            if(line[i]==' ')
            {
                count++;
            }
        }

        cout<<"Count = "<<count<<endl;

    }

    return 0;
}