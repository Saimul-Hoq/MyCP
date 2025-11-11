#include<iostream>
#include<stdlib.h>
using namespace std;


int main()
{
    int year1, year2, check=0;
    cout<<"Enter two years: ";
    cin>>year1>>year2;
    for(int i=year1; i<=year2; i++)
    {
        if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        {
            cout<<i<<endl;
            check=1;
        }
    }
    if(check==0)
    {
        cout<<"There is no leap year between the two years."<<endl;
    }

    return 0;
}