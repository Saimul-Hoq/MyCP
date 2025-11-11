#include<iostream>
using namespace std;
int main()
{
    int i=1, j=1,  n, p=1;
    cout<<"Enter any number: ";
    cin>>n;
    while(i<=n)
    {
        
        while(j<=i)
        {
            cout<<p<<" ";
            p++;
            j++;
        }
        cout<<endl;
        
        j=1;
        i++;
    }
    return 0;
}