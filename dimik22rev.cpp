#include<iostream>
#include<math.h>
using namespace std;
#define endl "\n"

int main()
{
    int size=100000, arr[size+1], root=sqrt(size);

    for(int i=0; i<=size; i++)
    {
        arr[i]=1;
    }
    arr[1]=0;

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
        int a,b,count=0;
        cin>>a>>b;

        for(int i=a; i<=b; i++)
        {
            if(arr[i]==1)
            {
                count++;
            }
        }

        cout<<count<<endl;

    }

    return 0;
}