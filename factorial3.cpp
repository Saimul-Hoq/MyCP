#include<iostream>
using namespace std;
int main()
{
    int n, count=1, mult=1;
    cout<<"Enter a number: ";
    cin>>n;
    while(count<=n)
    {
        mult=mult*count;
        count=count+1;
    }
    cout<<"The factorial of "<<n<<" is "<<mult<<endl;
    return 0;



}
