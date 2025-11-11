#include<iostream>
using namespace std;

int main()
{
    int houseNum[20];
    houseNum[0]=0;
    houseNum[1]=1;
    for(int i=2; i<20; i++)
    {
        houseNum[i]=houseNum[i-1]+houseNum[i-2];
    }

    for(int i=0; i<20; i++)
    {
        cout<<"House: "<<i+1<<", Number = "<<houseNum[i]<<endl;
    }

    return 0;
}