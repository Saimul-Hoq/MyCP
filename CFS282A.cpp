#include<iostream>
using namespace std;
#define endl "\n"

int main()
{
    int t, count=0;
    cin>>t;

    while(t--)
    {
        string line;
        cin>>line;

        for(int i=0; i<line.length(); i++)
        {
            if(line[i]=='+')
            {
                count++;
                break;
            }
            else if(line[i]=='-')
            {
                count--;
                break;
            }
        }
    }
    cout<<count<<endl;


    return 0;
}