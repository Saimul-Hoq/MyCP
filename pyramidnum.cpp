#include<iostream>
using namespace std;
int main()
{
    int i=1, j=1, k, n, p=1;
    cout<<"Enter any number: ";
    cin>>n;
    k=n-1;
    while(i<=n)
    {
        while(j<=k)
        {
            cout<<" ";
            j++;
        }
        j=1;
        k--;
        while(j<=i)
        {
            cout<<p<<" ";
            p++;
            j++;
        }
        cout<<endl;
        p=1;
        j=1;
        i++;
    }
    return 0;
}