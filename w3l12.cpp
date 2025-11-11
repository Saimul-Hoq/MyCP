#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int sum=0, count=1, n;
    cout<<"Enter the number till which you want to continue: ";
    cin>>n;
    while(count<=n)
    {
        
        sum=sum + (count*count);
        count++;
    }
    cout<<"The sum is "<<sum<<endl;
    return 0;

    
}