// // // #include<iostream>
// // // using namespace std;
// // // #define min -1   ;
// // // #define pi (2*acos(0))
// // // #define endl "\n"
// // // #define ll long long


// // // int main()
// // // {
    
// // //     int x=min
// // //     cout<<"min = "<<x<<endl;
// // //     cout<<"pi = "<<pi<<endl;
// // //     cout<<"acos = "<<2*acos(0)<<endl  ;

// // //     ll a=4353453;
// // //     cout<<a<<endl;

// // //     return 0;
// // // }

// // #include<iostream>
// // using namespace std;

// // #define MAX(a, b) (a > b? a : b)

// // int main()
// // {
// //     int a=83, b=323;
// //     double d1=8.32323, d2=3.33332323;

// //     cout<<"Maximum of "<<a<<" and "<<b<<" is "<<MAX(a, b)<<endl;
// //      out<<"Maximum of "<<d1<<" and "<<d2<<" is "<<MAX(d1, d2)<<endl;

// //     return 0;

// // }

// // #include<iostream>
// // using namespace std;

// // int main()
// // {
// //     int a=5, b=7;
// //     a^=b;
// //     b^=a;
// //     a^=b;

// //     cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;

// // #define swap(a, b) {      \
// //                     a^=b; \
// //                     b^=a; \
// //                     a^=b; \
// //                     }

// // int main()
// // {
// //     int c=3, d=5;

// //     cout<<"c = "<<c<<", d = "<<d<<endl;
// //     swap(c, d);
// //     cout<<"c = "<<c<<", d = "<<d<<endl;


// //     return 0;
// // }

// #include<iostream>
// using namespace std;

// // #define RED 1
// // #define GREEN 2
// // #define BLUE 3

// // enum COLOR {RED = 1, GREEN = 2, BLUE = 3};

// // int main()
// // {
// //     cout<<RED<<endl;

// //     return 0;    
// // }

// enum DAY {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};

// int main()
// {
//     enum DAY today;
//     today = THURSDAY;

//     switch(today)
//     {
//         case SUNDAY:
//             cout<<"Hello Sunday"<<endl;
//             break;
        
//         case MONDAY:
//             cout<<"Hello Monday."<<endl;
//             break;

//         case TUESDAY:
//             cout<<"Hello Tuesday."<<endl;
//             break;

//         case WEDNESDAY:
//             cout<<"Hello Wednesday."<<endl;
//             break;

//         case THURSDAY:
//             cout<<"Hello Thursday."<<endl;
//             break;

//         case FRIDAY:
//             cout<<"Hello Friday."<<endl;
//             break;

//         case SATURDAY:
//             cout<<"Hello Saturday."<<endl;
//             break;

//     }

//     return 0;
// }


#include<iostream>
#include<stdlib.h>
using namespace std;

int add(int a, int b)
{
    int s=a+b;
    return s;
}


int main()
{
    int *arr, length, i, sum=0;

    cout<<"Enter numbers of integers: ";
    cin>>length;

    arr = (int*)malloc(sizeof(int)*length);

    for(i=0; i<length; i++)
    {
        cout<<"Enter Number "<<i+1<<" : ";
        cin>>arr[i];
        sum=add(sum, arr[i]);
    }

    cout<<"The average is "<<(double)sum/length<<endl;

    return 0;
}