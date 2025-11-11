#include<iostream>
using namespace std;
#define endl "\n"

/*int main()
{
    int a,b;

    a=0;
    b=~a;
    printf("a = %d, b = %d\n", a, b);

    a=-5;
    b=~a;
    printf("a = %d, b = %d\n", a, b);
    

   char x=43;
   printf("x = %d\n", x);
   x=x<<1;
   printf("x = %d\n", x);
   x=x<<1;
   printf("x = %d\n", x);

   char y=0;
   printf("y = %d\n", y);
   y=y>>1;
   printf("Y = %d\n", y);



    return 0;

}*/

/*int main()
{
    int n,x,m;
    char s;
    while(1)
    {
        cout<<"Enter any number.(0 to exit): ";
        cin>>n;

        if(n==0)
        {
            cout<<"Tata Bye Bye!"<<endl;
            break;
        }

        cout<<"Left shift = press l"<<endl<<"Right shift = press r"<<endl;
        
        cin>>s;
        if(s=='l')
        {
            cout<<"Shift value: ";
            cin>>x;

            m = n<<x;
            
            cout<<"Left shifted value = "<<m<<endl;
        }
        else if(s=='r')
        {
            cout<<"Shift value: ";
            cin>>x;

            m = n>>x;
            
            cout<<"Right shifted value = "<<m<<endl;
        }
    }

    return 0;
}*/

/*int main()
{
    int a,b,c;
    cin>>a>>b;

    c=a&b;
    cout<<"AND = "<<c<<endl;

    c=a|b;
    cout<<"OR = "<<c<<endl;

    c=a^b;
    cout<<"XOR = "<<c<<endl;

    return 0;
}*/

/*int main()
{
    int n;


    while(1)
    {
        cout<<"Enter any number.(0 to exit): ";
        cin>>n;

        if(n==0)
        {
            cout<<"Tata Bye Bye!!!"<<endl;
            break;
        }

        if((n&1)==0)
        {
            cout<<"Even"<<endl;
        }
        else
        {
            cout<<"Odd"<<endl;
        }

    }

    return 0;
}*/

/*
char to_upper(char ch)
{
    return ch&95;
}

char to_lower(char ch)
{
    return ch|32;
}


int main()
{
    char ch;
    cin>>ch;

    if(ch>=65 && ch<=90)
    {
        cout<<to_lower(ch)<<endl;
    }
    else if(ch>=97 && ch<=122)
    {
        cout<<to_upper(ch)<<endl;
    }

    return 0;


}*/

/*int main()
{
    int n;
    cin>>n;

    if(n!=0 && (n&(n-1))==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}*/

/*int main()
{
    int n, count=0;
    cin>>n;

    while(n)
    {
        if((n&1)==1)
        {
            count++;
        }
        n=n>>1;
    }

    cout<<"Count = "<<count<<endl;

    return 0;
}*/

/*#include<limits.h>

int main()
{
    int n = sizeof(int) * CHAR_BIT;
    int num, count=0;
    cin>>num;

    for(int i=0; i<n; i++)
    {
        if((num & (1<<i)))
        {
            count++;
        }

    }

    cout<<"Count = "<<count<<endl;

    return 0;
}*/

/*int main()
{
    int a,b;
    cin>>a>>b;

    if(!(a^b))
    {
        cout<<"Equal"<<endl;
    }
    else
    {
        cout<<"NOT Equal"<<endl;
    }

    return 0;
}*/

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int xr = arr[0];

    for(int i=1; i<n; i++)
    {
        xr=xr^arr[i];
    }

    cout<<"Single= "<<xr<<endl;

    return 0;

}
