#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int fibo[n], i=0, j=1;
    fibo[0]=0;
    fibo[1]=1;
    for(int c=2; c<n; c++)
    {
        fibo[c]=i+j;
        i=j;
        j=fibo[c];
    }

    for(int i=0; i<n; i++)
    {
        cout<<fibo[i]<<" ";
    }
    return 0;
}