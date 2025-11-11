
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long a, b;
        cin>>a;
        cin>>b;
        long long multi = a*b;
        long long gcd,lcm;

        if(a>b)
        {
            while(a%b!=0)
            {
                long long temp = a;
                a=b;
                b=temp%b;
            }
            gcd = b;
            
        }

        else
        {
            while(b%a!=0)
            {
                long long temp = b;
                b=a;
                a=temp%a;
            }
            gcd = a;
            
        }

        lcm = multi/gcd;
        cout<<"LCM = "<<lcm<<endl;
    }

    return 0;
}
