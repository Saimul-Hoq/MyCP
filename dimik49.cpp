#include<iostream>
#include<math.h>
using namespace std;
#define endl "\n"


int main()
{
    int size=1000000, arr[size+1], root=sqrt(size);

    for(int i=0; i<=size; i++)
    {
        arr[i]=1;
    }

    for(int i=2; i<=root; i++)
    {
        if(arr[i]==1)
        {
            for(int j=i*i; j<=size; j+=i)
            {
                arr[j]=0;
            }
        }
    }

    int t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;

        int isPrime=1;
        for(int i=2; i<=sqrt(n); i++)
        {
            if(arr[i]==1)
            {
                if(n%i==0)
                {
                    isPrime=0;
                    break;
                }
            }
        }

        if(isPrime==1)
        {
            cout<<n<<" is a prime"<<endl;
        }
        else
        {
            cout<<n<<" is not a prime"<<endl;
        }
    }

    return 0;

}





