#include<iostream>
using namespace std;
#define endl "\n"



/*int x=1;
static int a=100;

void myfunc(int y)
{
    y=y*2;
    x=x+10;
    printf("myfunc, x = %d, y = %d\n", x, y);
}

int main()
{
    int y=5;

    x=10;

    myfunc(y);

    printf("main, x = %d, y = %d\n", x, y);

    cout<<"a = "<<a<<endl;
    a=333;
    cout<<"a = "<<a<<endl;

    
   return 0;
}*/

void func()
{
    int a=10;
    static int s=10;

    a+=2;
    s+=2;
    
    cout<<"a = "<<a<<"\ts = "<<s<<endl;
    
}

int main()
{
    func();
    func();
    func();

    return 0;
}
