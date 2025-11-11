#include<iostream>
using namespace std;
int main()
{
    int i=1, j=1, k=1, n;
    cout<<"Enter any number: ";
    cin>>n;
    

    while(i<=n)
    {
        while(k<=(n-i))
        {
            cout<<" ";
            k++;
        }
        k=1;
        
        while(j<=i)
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
        j=1;
    }
    return 0;
}