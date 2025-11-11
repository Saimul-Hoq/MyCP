#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        long long n;
        long long p;
        cin>>n;
        cin>>p;
        //long long nb = floor(n/2);


        if(n==1)
        {
            if(p==1)
            {
                cout<<"Case "<<i<<": Evenius"<<endl;

            }
            else if(p==2)
            {
                cout<<"Case "<<i<<": Oddius"<<endl;

            }
        }
        else if(n==3)
        {
            cout<<"Case "<<i<<": Oddius"<<endl;
            
        }
        else if(n%2==1)
        {
            if(p==1)
            {
                cout<<"Case "<<i<<": Oddius"<<endl;

            }
            else if(p==2)
            {
                cout<<"Case "<<i<<": Evenius"<<endl;

            }
        }

        else
        {
            cout<<"Case "<<i<<": Oddius"<<endl;

        }
        
        
        
    }

    return 0;
}