#include<iostream>
using namespace std;
#define endl "\n"


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p,q,c;
        cin>>p>>q>>c;

        int temp=1;

        for(int i=1; i<=q; i++)
        {
            temp = (temp*p)%c;
        }

        cout<<"Result = "<<temp<<endl;
    }
    
    return 0;
}



























/*int main()
{
    int n;
    cin>>n;
    
    while(n--)
    {
        int p,q,c;
        cin>>p>>q>>c;

        long long temp = 1;
        int result;

        for(int i=1; i<=q; i++)
        {
            temp = temp*(p%c);
        }

        result = temp%c;

        cout<<"Result = "<<result<<endl;
    }

    return 0;
}*/