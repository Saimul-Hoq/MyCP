#include<iostream>
using namespace std;
#define endl "\n"

int main()
{
    int a=10;

    cout<<a<<endl;
    cout<<&a<<endl;

    int *p;
    p=&a;

    cout<<"p = "<<p<<endl;
    cout<<"*p = "<<*p<<endl;

    *p=20;

    cout<<"a = "<<a<<endl;
    cout<<"p = "<<p<<endl;
    cout<<"*p = "<<*p<<endl;

    char name[]="Saim";
    printf("%p\n", name);
    printf("%p\n", &name[0]);

    char *ptr;
    ptr=name;
    printf("%s\n", ptr);
    printf("%p\n", ptr);

    char a1='A', b='B', c='C';
    char *p1, *p2, *p3;
    p1=&a1;
    p2=&b;
    p3=&c;

    cout<<*p1<<endl<<*p2<<endl<<*p3<<endl;

    int x=123;
    int *pp, **q;
    pp=&x;
    q=&pp;

    cout<<q<<"\t"<<&pp<<endl;
    cout<<*q<<"\t"<<&x<<endl;
    cout<<**q<<"\t"<<x<<endl;



    return 0;
}