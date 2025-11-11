#include<iostream>
using namespace std;

struct Item
{
    int price;
    int sales;
    int revenue;
};

int main()
{
    Item item[5];

    for(int i=0; i<5; i++)
    {
        cout<<"Enter details for item"<<i+1<<" : "<<endl;
        cout<<"Price = ";
        cin>>item[i].price;
        cout<<"Sales = ";
        cin>>item[i].sales;
        cout<<"Revenue in % = ";
        cin>>item[i].revenue;
    }

    int revenue=0;
    for(int i=0; i<5; i++)
    {
        int rev = (item[i].price) * (item[i].revenue);
        rev=rev/100;
        rev*=item[i].sales;
        rev*=7;
        revenue+=rev;
    }
    cout<<"Total Revenue of 1 Week = "<<revenue<<endl;
    cout<<"Average Revenue of Each Day = "<<revenue/7<<endl;
}