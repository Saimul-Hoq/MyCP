#include<iostream>
using namespace std;
int main()
{
    int n, fact=1, count=1;
    cout<<"Enter the number you want to do factorial: ";
    cin>>n;
    if(n<0)
      {
        cout<<"Factorial of negative numbers doesn't exist."<<endl;
      }
    else
      {
        while(count<=n)
            {
                fact=fact*count;
                count=count+1;
            }
        cout<<"The factorial of "<<n<<" is "<<fact<<endl;
      }
    return 0;

}
