#include<iostream>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a, b;
        cin>>a>>b;

        if(a!=0)
        {
            if(a%2==0)
            {
                cout<<"YES"<<endl;
            }
            else 
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            if(b%2==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}









/*int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a, b;
        cin>>a>>b;

        b=b*2;

        if(a>b)
        {
            a=a-b;
            if(a%2==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(b>a)
        {
            b=b-a;
            if(b%2==1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                b=b/2;
                if(b%2==0)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}*/