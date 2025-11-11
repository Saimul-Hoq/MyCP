#include<iostream>
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

        int cnt = 0, count = 0;

        for(int i=0; i<=line.length(); i++)
        {
            if(line[i]!=' ' && line[i]!='\0')
            {
                cnt=1;
            }
            else
            {
                count+=cnt;
            }
        }

        cout<<"Count = "<<count<<endl;

    }

    return 0;
}