#include<iostream>
using namespace std;

int main()
{
    int T, count = 0, n = 0;
    cin>>T;
    string line;
    getline(cin, line);

    for(int k=0; k<T; k++)
    {
        
        getline(cin, line);

        for(int i=0; i<line.length(); i++)
        {
            if(line[i] != ' ')
            {
                count = 1;
            }
            else
            {
                n+=count;
                count = 0;
            }
        }

        if(count == 1)
        {
            n+=count;
        }

        if(n==1)
        {
            cout<<"1/"<<1<<endl;
        }
        else
        {
            cout<<"1/"<<n*(n-1)<<endl;
        }


        count=0;
        n=0;

        

        
    }

    return 0;
}