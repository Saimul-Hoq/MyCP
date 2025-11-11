#include<iostream>
using namespace std;

void pattern13_1(int n, char ch)
{
    int p=n;
    for(int r=1; r<=n; r++)
    {
        for(int c=1; c<=p; c++)
        {
            cout<<ch;
        }
        p--;
        cout<<endl;
    }
    p=2;
    for(int r=2; r<=n; r++)
    {
        for(int c=1; c<=p; c++)
        {
            cout<<ch;
        }
        p++;
        cout<<endl;
    }
}

void pattern13_2(int n, char c)
{
    int p=n, k=0;
    while(p>0)
    {
        for(int i=1; i<=k; i++)
        {
            cout<<" ";
        }
        k++;
        
        for(int i=1; i<=p; i++)
        {
            cout<<c;
        }
        p-=2;        
        cout<<endl;
    }

    k-=2;
    p+=4;

    while(p<=n)
    {
        for(int i=1; i<=k; i++)
        {
            cout<<" ";
        }
        k--;
        for(int i=1; i<=p; i++)
        {
            cout<<c;
        }
        p+=2;
        cout<<endl;
    }
}

void pattern13_3(int n, char c)
{
    int p=n, k=0;
    while(p>0)
    {
        for(int i=1; i<=k; i++)
        {
            cout<<" ";
        }
        k++;
        
        for(int i=1; i<=p; i++)
        {
            cout<<c;
        }
        p--;        
        cout<<endl;
    }

    k-=2;
    p+=2;

    while(p<=n)
    {
        for(int i=1; i<=k; i++)
        {
            cout<<" ";
        }
        k--;
        for(int i=1; i<=p; i++)
        {
            cout<<c;
        }
        p++;
        cout<<endl;
    }
}

void pattern13_4(int n, char c)
{
    int p=1, space=(n-1)*2;

    while(space>=0)
    {
        for(int i=1; i<=p; i++)
        {
            cout<<c;
        }
        for(int i=1; i<=space; i++)
        {
            cout<<" ";
        }
        for(int i=1; i<=p; i++)
        {
            cout<<c;
        }
        cout<<endl;
        p++;
        space-=2;

    }
}

int main()
{
    int n;
    cout<<"Enter the Size: ";
    cin>>n;
    char c;
    cout<<endl<<"Enter Character: ";
    cin>>c;
 
    cout<<"Pattern 1:"<<endl;
    pattern13_1(n, c);
    cout<<"Pattern 2:"<<endl;
    pattern13_2(n, c);
    cout<<"Pattern 3:"<<endl;
    pattern13_3(n, c);
    cout<<"Pattern 4:"<<endl;
    pattern13_4(n, c);

    return 0;

}
