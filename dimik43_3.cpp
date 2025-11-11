#include<iostream>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int p,q,c,temp=1;
        cin>>p>>q>>c;

        for(int i=1; i<=q; i++)
        {
            temp = (temp*p)%c;
        }

        cout<<"Result = "<<temp<<endl;

    }

    return 0;
}