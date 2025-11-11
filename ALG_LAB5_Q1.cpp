#include<iostream>
using namespace std;

int main()
{
    int notes[]={1000, 500, 200, 100, 50, 20, 10, 5, 2};

    int amount;
    cout<<"Enter Amount: "<<endl;
    cin>>amount;

    int i=0, count=0, temp;
    while(amount>0)
    {
        temp=amount/notes[i];
        if(temp>=1)
        {
            count = count + temp;
            amount = amount - temp*notes[i];
            i++;
        }
        else
        {
            i++;
            break;
        }
    }

    cout<<"Minimum number of notes: "<<count<<endl;

    return 0;
}