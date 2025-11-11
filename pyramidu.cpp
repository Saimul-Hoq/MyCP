#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int i=n, j=1, p=0;
    while(i>=1)
    {
        while(j<=p)
        {
            cout<<" ";
            j++;
        }
        j=1;
        p++;
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