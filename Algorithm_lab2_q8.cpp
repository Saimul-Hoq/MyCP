#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int size;
    cout<<"Enter Size: ";
    cin>>size;
    int id[size];

    cout<<"Enter Elements: ";
    for(int i=0; i<size; i++)
    {
        cin>>id[i];
    }

    int max=id[0], min=id[0], sum=id[0], count=0, countdup=0;

    for(int i=1; i<size; i++)
    {
        if(max<id[i])
        {
            max=id[i];
        }
        if(min>id[i])
        {
            min=id[i];
        }

        sum+=id[i];
    }

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(id[i]==id[j] && j<i)
            {
                break;
            }
            else if(id[i]==id[j])
            {
                count++;
            }
            
        }
        if(count>1)
        {
            cout<<id[i]<<" Occured "<<count<<" times."<<endl;


        }

        count=0;
    }

    cout<<"Max = "<<max<<endl;
    cout<<"Min = "<<min<<endl;
    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = "<<(double)sum/size<<endl;


    return 0;

}

