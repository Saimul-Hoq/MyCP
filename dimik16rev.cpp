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

        int i=0, j;
        for(j=1; j<line.length(); j++)
        {
            if(line[j]==' ')
            {
                for(int k=j-1; k>=i; k--)
                {
                    cout<<line[k];
                }
                cout<<line[j];
                i=j+1;
            }
        }
        
        for(int k=j-1; k>=i; k--)
        {
            cout<<line[k];
        }
        cout<<endl;
    }

    return 0;
    
}