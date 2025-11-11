#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n, p=0;
    cin>>n;  

    while(n>=1 && p<2)
    {
        cout<<n<<" ";

        if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=(n*3) + 1;
        }
        if(n==1)
        {
            p++;
        }
    }
    
    return 0;
}