#include<iostream>
using namespace std;

/*double add(double a, double b)
{
    double sum = a + b;
    a=55;
    return sum;
}

int main()
{
    double a=2.5, b=3;
    double c = add(a,b); //double a = 2.5
    cout<<c<<" "<<a<<endl;
    return 0;
}*/

/*double add(double x, double y); //prototype

int main()
{
    double a=2.5, b=2.5;
    double c = add(a,b);
    cout<<c<<endl;
    return 0;
}

double add(double n1, double n2)
{
    
    return (n1+n2);
}*/

/*int testfnc(int n1)
{
    int n2=n1;
    n1=2*n2;
    return (n1*n2);
}

int main()
{
    int x=10, y=20, z=30;
    z=testfnc(x);
    cout<<x<<" "<<y<<" "<<z<<" "<<endl;
    return 0;
}*/

//Global variable:
/*double pi=3.14;

void fnc()
{
    pi=3.14159;
    
}

int main()
{
    cout<<pi<<endl;
    fnc();
    cout<<pi<<endl;
    return 0;
}*/


/*double pi=3.14;

double fnc()
{
    double pi=3.14159;
   
    
    
}

int main()
{
    cout<<pi<<endl;
    
    fnc();
    cout<<pi<<endl;
    return 0;
}*/

/*double pi=3.14;

double fnc()
{
    double pi=3.14159;
    return pi;
    
}

int main()
{
    cout<<pi<<endl;
    double d=fnc();
    cout<<pi<<" "<<d<<endl;
    return 0;
}*/

int findmax(int n, int arr[])
{
    int i=0;
    for(int j=0; j<n; j++)
    {
        if(arr[i]<arr[j])
        {
            i=j;
        }
    }
    return arr[i];
}

void sorting(int n, int arr[])
{
    int i=0;
    while(i<n)
    {
        for(int j=i+1; j<n; j++)
    {
        if(arr[i]<arr[j])
        {
            swap(arr[i],arr[j]);
        }
        
    }
    i++;
    }
}    


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int p = findmax(n, arr);
    cout<<"Max= "<<p<<endl;

    sorting(n, arr);
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}