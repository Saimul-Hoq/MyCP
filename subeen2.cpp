
#include<iostream>
using namespace std;

/*int main()
{
    char ch;
    for(int i=127; i<=256; i++)
    {
        ch=i;
        cout<<"ASCII code for "<<ch<<" is "<<i<<endl;
    }

    char sl, cl;
    cin>>sl;
    cl=sl-32;
    cout<<cl<<endl;
    return 0;
}*/
//CAPITAL<-->small:
/*int testnum(char ch)
{
    if(ch>=48 && ch<=57)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char ch;
    cin>>ch;
    if(testnum(ch)==1)
    {
        cout<<"Number"<<endl;
    }
    else
    {
        cout<<"NOT"<<endl;
    }
    return 0;
    
}*/

/*int main()
{
    char ch='s';
    int n=100, arr[5]={1,2,3,4,5};

    cout<<"Address of "<<ch<<" is "<<&ch<<endl;
    cout<<"Address of "<<n<<" is "<<&n<<endl;
    cout<<"Address of array is "<<arr<<endl;
    cout<<"Address of 1st index is "<<&arr[0]<<endl;
    cout<<"Address of 2nd index is "<<&arr[1]<<endl;
    cout<<sizeof(char)<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(n)<<endl;

    return 0;
}*/

//pointer:

int main()
{
    /*int x=10; 
    int *p;
    p=&x;
    cout<<*p<<endl;
    cout<<p<<endl;*/

    /*double pi=3.1416;
    int *ptr;
    ptr=&pi;
    cout<<pi<<endl;
    cout<<*ptr<<endl;*/

    /*int x=10;

    int *p=&x;
    cout<<x<<endl;
    *p=20;
    
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;

    x=30;
    cout<<x<<endl;
    cout<<*p<<endl;*/

    int x=10;
    int y;
    int *p;

    cout<<"Value of x = "<<x<<endl;
    p=&x;
    y=*p;
    *p=15;

    cout<<"Value of x = "<<x<<endl;
    cout<<"Value of y = "<<y<<endl;
    cout<<"Value of *p = "<<*p<<endl;
    cout<<"Address of x = "<<&x<<endl;
    cout<<"Address of y = "<<&y<<endl;
    cout<<"Address of p = "<<p<<endl;
    

    


    return 0;
}