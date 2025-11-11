#include<iostream>
#include<math.h>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        double a,b,c,s, area;
        cin>>a>>b>>c;

        s=(a+b+c)/2;

        area=s*(s-a)*(s-b)*(s-c);
        area=sqrt(area);

        printf("Area = %0.3lf\n", area);

    }

    return 0;
}