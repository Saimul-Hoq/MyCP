#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;


//setprecition:
/*int main()
{
    double x=3.123456;
    cout<<fixed<<setprecision(3)<<x<<endl;

    return 0;
}*/

//ternary operator
/*int main()
{
    int x;
    cin>>x;

    //(x%2==0)? cout<<"Even"<<endl : cout<<"Odd"<<endl;
    (x%2==1)? cout<<"ODD"<<endl : cout<<"EVEN"<<endl;
    return 0;
}*/

//Min Max Avg
/*int main()
{
    cout<<min({10,20,30,100,23})<<endl;
    cout<<max(10, 20)<<endl;

    return 0;
}*/

//Dynamc Array:
/*int main()
{
    int *arr = new int[10];
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;

}*/

//Return array from function.

/*int* func()
{
    int *arr = new int[5];
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }

    return arr;

}
int main()
{
    int *arr = func();
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}*/

int main()
{
    int *arr = new int[5];
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }

    int *carr = (int*)realloc(arr, sizeof(int)*10);
    for(int i=5; i<10; i++)
    {
        cin>>carr[i];
    }


    for(int i=0; i<10; i++)
    {
        cout<<carr[i]<<" ";
    }
    cout<<endl;
    delete[] arr;
    cout<<arr[4];
    cout<<carr[4];

    return 0;

}