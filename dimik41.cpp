#include<bits/stdc++.h>
using namespace std;
#define endl "\n"



long long int factorial(int n)
{
    long long int fact=1;

    for(int i=2; i<=n; i++)
    {
        fact=fact*i;
    }

    return fact;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        long long int fact;
        double result=0, term;

        for(int i=1; i<=n; i++)
        {
            fact = factorial(i);
            term = (double)i/fact;
            result+=term;
        }

        printf("%0.4lf\n", result);

    }

    return 0;
}


