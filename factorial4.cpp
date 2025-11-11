#include<iostream>
using namespace std;
int main()
{
    int n, fact=1,count=1;
    cout<<"Enter the number you want to do factorial: ";
    cin>>n;
    while(count<=n)
    {
        fact=fact*count;
        count++;
    }
    cout<<" The factorial of "<<n<<" is "<<fact<<endl;
    return 0;
}
