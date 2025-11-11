#include<iostream>
using namespace std;
int main()
{
    int sum=0, count=1, i=1, n;
    cout<<"Enter the number till which you want to continue: ";
    cin>>n;
    while(i<=n)
    {
        while(count<=i)
        {
            sum=sum+count;
            count++;
        }
        count=1;
        i++;
    }
    cout<<"The sum is "<<sum<<endl;
    return 0;
}