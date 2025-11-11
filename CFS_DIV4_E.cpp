#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
#define endl "\n"

int main()
{
    
    int arr[200001], count=0, num;

    arr[0]=0;
    for(int i=1; i<=200000; i++)
    {
        num=i;
        while(num!=0)
        {
            num=num/3;
            count++;
        }   
        
        arr[i]=arr[i-1]+count;
        count=0;
    }

    
    
    int t;
    cin>>t;

    while(t--)
    {
        int l, r;
        cin>>l>>r;

        count=0;
        num=l;
        while(num!=0)
        {
            num=num/3;
            count++;
        }  

        count = 2*count + (arr[r]-arr[l]);

        cout<<count<<endl;
    }

    return 0;
}