#include<iostream>
using namespace std;

/*int main()
{
    int x = 10;
    int *p;
    p = &x;

    cout<<"&x = "<<&x<<endl;
    cout<<"p = "<<p<<endl;
    cout<<"*p = "<<*p<<endl;
    cout<<"x = "<<x<<endl;

    *p = 20;

    cout<<"x = "<<x<<endl;

    x = 30;

    cout<<"x = "<<x<<endl;
    cout<<"*p = "<<*p<<endl;
    

    return 0;

}*/

/*int main()
{
    int x = 10, y;
    int *p, *q;

    p = &x;
    q = &y;
    y = *p;
    *p = 15;
    *q = 20;

    cout<<"Value of x = "<<x<<endl;
    cout<<"Value of y = "<<y<<endl;
    cout<<"Value of *p = "<<*p<<endl;
    cout<<"Value of *q = "<<*q<<endl;

    return 0;
}*/

int main()
{
    /*char s[]="Bangladesh";

    printf("Name of our country : %s\n", s);
    printf("Address of s : %p", s);
    */

    /*char s[]="Bangladesh";
    char *p;
    p = s; 

    printf("Value = %s\n", p);
    printf("Address = %p\n", p);
    
    cout<<"2nd Value = "<<*(p+1)<<endl;
    */

   /*char c1 = 'A', c2 = 'B', c3 = 'C';
   char *p1 = &c1, *p2 = &c2, *p3 = &c3;

   printf("c1 = %c\n", *p1);
   printf("c2 = %c\n", *p2);
   printf("c3 = %c\n", *p3);
    */

   char ch = 'A';
   char *p = &ch;
   char **q = &p;

   printf("ch = %c\n", ch);
   printf("ch = %c\n", *p);
   printf("ch = %c\n", **q);

   **q = 'B';

   printf("ch = %c\n", ch);
   printf("ch = %c\n", *p);
   printf("ch = %c\n", **q);




    return 0;

}