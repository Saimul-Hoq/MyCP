#include<iostream>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string line;
        cin>>line;

        for(int i=line.length()-1; i>=0; i--)
        {
            cout<<line[i];
        }
        cout<<endl;
    }

    return 0;
}