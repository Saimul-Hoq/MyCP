#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    unsigned long long size = pow(2,64)-1, sum=1;
    unsigned long long numbers[size+1];

    for(int i=0; i<=size; i++)
    {
        numbers[i]=0;
    }

    

    for(int num=6; num<=size; num++)
    {
        for(int i=2; i<=sqrt(num); i++)
        {
            if(num%i == 0)
            {
                sum = sum + i + num/i;
            }
        }

        if(num == sum)
        {
            numbers[num]=1;
        }
    }

    int t;
    cin>>t;

    while(t--)
    {
        unsigned long long n;
        cin>>n;

        if(numbers[n]==1)
        {
            cout<<"YES, "<<n<<" is a perfect number!"<<endl;
        }
        else
        {
            cout<<"NO, "<<n<<" is not a perfect number!"<<endl;

        }
    }
    

    return 0;
}