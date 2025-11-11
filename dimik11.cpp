#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n, count=0;
    cin>>n;

    long long fact = 1;

    for(int i=0; i<n; i++)
    {
        int num;
        cin>>num;

        for(int k=2; k<=num; k++)
        {
            fact = fact*k;
        }

        

        while((fact%10)==0)
        {
           
            count++;
            fact = fact/10;
            
        }

        cout<<count<<endl;
        fact = 1;
        count=0;

    }
    

    return 0;
}