#include<iostream>
using namespace std;

void pattern13_1(int n)
{
    int p=n;
    for(int r=1; r<=n; r++)
    {
        for(int c=1; c<=p; c++)
        {
            cout<<"C";
        }
        p--;
        cout<<endl;
    }
    p=2;
    for(int r=2; r<=n; r++)
    {
        for(int c=1; c<=p; c++)
        {
            cout<<"C";
        }
        p++;
        cout<<endl;
    }
}

void pattern13_2(int n)
{
    int p=n, k=0;
    while(p!=0)
    {
        for(int i=1; i<=k; i++)
        {
            cout<<" ";
        }
        k++;
        
        for(int i=p; i>=1; i--)
        {
            cout<<'c';
        }
        p-=2;
        
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the Size: ";
    cin>>n;
 
    pattern13_2(n);

    return 0;

}
