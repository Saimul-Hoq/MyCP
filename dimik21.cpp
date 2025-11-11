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
        getline(cin, line);

        int term = (line.length())/2;
        int initial=0, final=line.length()-1;

        for(int i=0; i<term; i++, initial++, final--)
        {
            swap(line[initial], line[final]);
        }

        cout<<line<<endl;
    }

    return 0;
}