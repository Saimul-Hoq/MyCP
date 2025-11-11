#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int prime[100001];

    for(int i=0; i<100001; i++)
    {
        prime[i]=1;
    }

    int root = pow(100000, 0.5);

    for(int i=2; i<=root; i++)
    {
        for(int j=2; (i*j)<=100000; j++)
        {
            if(prime[i*j]==1)
            {
                prime[i*j]=0;
            }
        }
    }
    prime[1]=0;



    int t;
    cin>>t;
    getchar();

    while(t--)
    {
        int ilimit, flimit;
        cin>>ilimit;
        cin>>flimit;

        int count=0;

        for(int i=ilimit; i<=flimit; i++)
        {
            if(prime[i]==1)
            {
                count++;
            }
        }

        cout<<count<<endl;


    }

    return 0;

}