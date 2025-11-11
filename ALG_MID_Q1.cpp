#include<iostream>
using namespace std;


struct Packet1
{
    string name;
    int price;
};

struct Packet2
{
    string name;
    int price;
};

struct Shelf
{
    string name;
    int price;
};

int main()
{
    
    int size_p1, size_p2;
    cout<<"Enter the size of Packet 1: ";
    cin>>size_p1;
    Packet1 product1[size_p1];
    cout<<"Enter the Name and prices of the sorted product: "<<endl;
    for(int i=0; i<size_p1; i++)
    {
        cout<<"Product "<<i+1<<" : "<<endl;
        cout<<"Name = ";
        cin>>product1[i].name;
        cout<<"Price = ";
        cin>>product1[i].price;
    }

    cout<<"Enter the size of Packet 2: ";
    cin>>size_p2;
    Packet2 product2[size_p2];
    cout<<"Enter the Name and prices of the sorted product: "<<endl;
    for(int i=0; i<size_p2; i++)
    {
        cout<<"Product "<<i+1<<" : "<<endl;
        cout<<"Name = ";
        cin>>product2[i].name;
        cout<<"Price = ";
        cin>>product2[i].price;
    }

    int size_total = size_p1+size_p2;
    cout<<size_total<<endl;
    Shelf product3[size_total];
    int i=0, j=0, k;
    while(i<size_p1 && j<size_p2)
    {
        if(product1[i].price<product2[j].price)
        {
            product3[k].price=product1[i].price;
            product3[k].name=product1[i].name;
            i++;
            k++;
        }
        else if(product1[i].price>=product2[j].price)
        {
            product3[k].price=product2[j].price;
            product3[k].name=product2[j].name;
            j++;
            k++;
        }
    }

    while(i<size_p1)
    {
        product3[k].price=product1[i].price;
        product3[k].name=product1[i].name;
        i++;
        k++;
    }
    while(j<size_p2)
    {
        product3[k].price=product2[j].price;
        product3[k].name=product2[j].name;
        j++;
        k++;
    }

    cout<<"Sorted product in the shelf: "<<endl;
    for(int m=0; m<k; m++)
    {
        cout<<product3[m].name<<" ";
    }
    cout<<endl;

    return 0;
    
    
    
}