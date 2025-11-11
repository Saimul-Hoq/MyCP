#include<iostream>
using namespace std;
int main()
{
    int i=3;
    int *const ptr = &i;

    const double pi=3.14;
    const double *const ptr2 = &pi;

    cout<<ptr<<" "<<*ptr<<" "<<ptr2<<" "<<*ptr2<<endl;
    return 0;
}