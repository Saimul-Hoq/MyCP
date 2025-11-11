#include<iostream>
using namespace std;

int main()
{
    int house[20];
    house[0]=0;
    house[1]=1;
    int temp=0;
    for(int i=2; i<20; i++)
    {
        for(int j=i-1, p=1; p<=i; j--, p++)
        {
            temp+=house[j];
        }
        house[i]=temp;
        temp=0;
    }

    for(int i=0; i<20; i++)
    {
        cout<<"House "<<i+1<<" No. : "<<house[i]<<endl;
    }

    return 0;
}