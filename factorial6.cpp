#include<iostream>
using namespace std;

void factorial(int n)
{
    int fact = 1;
    if(n>=0)
    {
        for(int count=1; count<=n; count++)
        {
            fact= fact*count;
        }
        cout<<"Factorial = "<<fact<<endl;
    }
    else
    {
        cout<<"The factorial of negative numbers doesn't exist."<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the value you want to do factorial: ";
    cin>>n;
    factorial(n);

    return 0;

}