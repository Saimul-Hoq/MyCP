#include<iostream>
using namespace std;
int main()
{
    int sum=0, n;
    cout<<"Enter any number: ";
    cin>>n;
    for(int i=1; i<=n; i++)
       {
        sum+=i;
       }
    cout<<"The sum of 1 to "<<n<<" is "<<sum<<endl;
    return 0;

}