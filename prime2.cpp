#include<iostream>
using namespace std;
int main()
{
    int n, i=2, count=0;
    cout<<"Enter a number: ";
    cin>>n;

    while(i<n)
    {
        if(n/i == 0)
        {
            count=1;
            i++;
        }
        else
        {
            i++;
        }
    }
    if(count==1)
    {
        cout<<n<<" is a not prime number.";
    }
    else
    {
        cout<<n<<" is a prime number.";
    }
    return 0;
}