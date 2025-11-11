#include<iostream>
using namespace std;
#define endl "\n"

int main()
{
    int a, b, i;
    cin>>a>>b;

    for(i=0; a<=b; i++)
    {
        a*=3;
        b*=2;
    }

    cout<<i<<endl;
    return 0;
}