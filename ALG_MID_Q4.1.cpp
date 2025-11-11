#include<iostream>
using namespace std;

struct Item
{
    string name;
    int price;
    int weight;
    double density;
};

int main()
{
    Item item[5];

    for(int i=0; i<5; i++)
    {
        cout<<"Enter information for item "<<i+1<<" : "<<endl;
        cout<<"Enter Name = ";
        cin>>item[i].name;
        cout<<"Enter Price = ";
        cin>>item[i].price;
        cout<<"Enter weight = ";
        cin>>item[i].weight;
        item[i].density=item[i].price/item[i].weight;
    }
    int arr[5];
    int capacity = 15, maxind, k=0;

    int max;
    for(int i=0; i<4; i++)
    {
       max=item[i].density, maxind=i;
       for(int j=i+1; j<5; j++)
       {
           if(max<item[j].density)
           {
               max=item[j].density;
               maxind=j;
           }
       }

       arr[k]=maxind;
       k++;
    }



    
}