#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sp;
    cin>>n;
    int p=n;
    p--;
    p/=2;
    sp=n-2;
    int i;

    for(i=0; i<p; i++)
    {
        for(int space=1; space<=i; space++)
        {
            cout<<" ";
        }
        cout<<"\\";
        for(int space=1; space<=sp; space++)
        {
           
            cout<<" ";
        }
        sp=sp-2;
        cout<<"/"<<endl;

    }

    sp=(n-1)/2;
    for(int space=1; space<=sp; space++)
    {      
        cout<<" ";
    }
    cout<<"X"<<endl;

    i--;
    sp=1;
    for(; i>=0; i--)
    {
        for(int space=1; space<=i; space++)
        {
            cout<<" ";
        }
        cout<<"/";
        for(int space=1; space<=sp; space++)
        {
            cout<<" ";
        }
        sp+=2;
        cout<<"\\"<<endl;

    }

    return 0;

}