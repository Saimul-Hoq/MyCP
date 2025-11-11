#include<iostream>
using namespace std;
int main()
{
    int i=1, j=1, k, n;
    cout<<"Enter any number: ";
    cin>>n;
    k=2*n-2;
    while(i<=n)
    {
        while(j<=k)
        {
            cout<<" ";
            j++;
        }
        j=1;
        k=k-2;
        while(j<=i)
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        j=1;
        i++;
    }
    return 0;
}