#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();

    while(t--)
    {
        string line;
        cin>>line;
        int ch;

        for(int i=0; i<line.length(); i++)
        {
            ch = line[i]-64;
            cout<<ch;
        }
        cout<<endl;
    }

    return 0;
}