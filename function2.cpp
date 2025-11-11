#include<iostream>
using namespace std;

/*double add(double num1, double num2)
{
    double sum = num1 + num2;
    return sum;
}

int main()
{
    double a=2.5, b=3;
    double c = add(a,b);
    cout<<c<<endl;
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

void fnc()
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

/*int findmax(int n, int arr[])
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

int findmin(int n, int arr[])
{
    int i=0;
    for(int j=0; j<n; j++)
    {
        if(arr[i]>arr[j])
        {
            i=j;
        }
    }
    return arr[i];
}

int findsum(int n, int arr[])
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        
        sum = sum + arr[i];
    }
    return sum;
}

double findaverage(int n, int arr[])
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        
        sum = sum + arr[i];
    }

    double average = sum/n;
    return average;

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

    int max = findmax(n, arr);
    int min = findmin(n,arr);
    int sum = findsum(n, arr);
    double avg = findaverage(n, arr);

    cout<<"Max= "<<max<<endl;
    cout<<"Min= "<<min<<endl;
    cout<<"Sum= "<<sum<<endl;
    cout<<"Average= "<<avg<<endl;

    return 0;

}*/

/*void testfnc(int arr[])
{
    arr[0]=199;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    cout<<arr[0]<<endl;
    testfnc(arr);
    cout<<arr[0]<<endl;
    return 0;
}*/

//circle area:
double area_func(int r)
{
    double area = 3.14*r*r;
    return area;
}

int main()
{
    int r;
    cin>>r;
    double area=area_func(r);
    cout<<"Area = "<<area<<endl;
    return 0;
}