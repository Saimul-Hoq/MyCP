#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        

        int k=1, pk = pow(2,k), m;

        while((n-1)%pk==0)
        {
            k++;
            pk = pow(2,k);
        }
        k--;
        pk = pow(2,k);
        m = (n-1)/pk;

        int a = 2;
        long long b = pow(a,m);
        b = b%n;
        
        
        while(b!=1 && b!=-1)
        {
            b = pow(b,2);
            b = b%n;
        }
        

        cout<<b<<endl;
        

        

    }

    return 0;
}