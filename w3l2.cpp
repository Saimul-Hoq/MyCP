#include<iostream>
using namespace std;
int main()
{
    int sum=0, count=1;
   
    while(count<=10)
    {
        sum=sum+count;
        count++;
    }
    cout<<"The sum of the first 10 natural numbers: "<<sum<<endl;
    return 0;
}