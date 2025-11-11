#include<iostream>
using namespace std;

struct Item
{
    int price;
    int sales;
    
};

int main()
{
    Item item[10];

    for(int i=0; i<10; i++)
    {
        cout<<"Enter details for item"<<i+1<<" : "<<endl;
        cout<<"Price = ";
        cin>>item[i].price;
        cout<<"Sales = ";
        cin>>item[i].sales;
        
    }

    int sales=0;
    for(int i=0; i<10; i++)
    {
       int sls = item[i].sales;
       sls*=10;
       sales+=sls;
    }
    cout<<"Total Sales = "<<sales<<endl;
    cout<<"Average Sales = "<<sales/10<<endl;
}