#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int i=n, j=1, k=0;
    while(i>=1)
    {
        while(j<=k)
        {
            cout<<" ";
            j++;
        }
        j=1;
        k=k+2;

        while(j<=i)
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        j=1;
        i--;
        
        
    }
    return 0;
}