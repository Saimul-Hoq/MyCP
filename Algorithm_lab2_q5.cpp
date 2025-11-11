#include<iostream>
#include<stdlib.h>
using namespace std;

int rectangle()
{
    int a, b;
    cout<<"Enter the length of 2 sides: ";
    cin>>a>>b;

    return a*b;

}

int square()
{
    int a;
    cout<<"Enter the length of the square: ";
    cin>>a;

    return a*a;
}

int trapezoid()
{
    int a, b, h;
    cout<<"Enter,\nLength of two parallel sides: ";
    cin>>a>>b;
    cout<<"Height: ";
    cin>>h;

    return 0.5*(a+b)*h;
}

int rhombus()
{
    int d1, d2;
    cout<<"Enter the length of two diagonal: ";
    cin>>d1>>d2;

    return (d1*d2)/2;
}

int parallelogram()
{
    int b, h;
    cout<<"Enter base and height: ";
    cin>>b>>h;

    return b*h;
}

int main()
{
    int choice;
    cout<<"Choose any option:"<<endl;
    cout<<"Rectangle, choose 1"<<endl;
    cout<<"Square, choose 2"<<endl;
    cout<<"Rhombus, choose 3"<<endl;
    cout<<"Parallelogram, choose 4"<<endl;
    cout<<"Trapezoid, choose 5"<<endl;

    cout<<"Enter Choice : ";
    cin>>choice;

    if(choice==1)
    {
        int area = rectangle();
        cout<<"Area = "<<area<<endl;
        
    }
    else if(choice==2)
    {
        int area = square();
        cout<<"Area = "<<area<<endl;
    }
    else if(choice==3)
    {
        int area = rhombus();
        cout<<"Area = "<<area<<endl;
    }
    else if(choice==4)
    {
        int area = parallelogram();
        cout<<"Area = "<<area<<endl;
    }
    else if(choice==5)
    {
        int area = trapezoid();
        cout<<"Area = "<<area<<endl;
    }


    return 0;



}