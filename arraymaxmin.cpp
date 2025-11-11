#include<iostream>
using namespace std;
int main()
{
    int i=0, j=0, arr[5];
    cout<<"Enter five numbers: ";
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    while(j<=4)
    {
        if(arr[i]<arr[j])
        {
            i=j;
            j++;
        }
        else
        {
            j++;
        }
    }
    cout<<"Maximum number is: "<<arr[i]<<endl;
    i=1;
    j=1;

    while(j<=4)
    {
        if(arr[i]>arr[j])
        {
            i=j;
            j++;
        }
        else
        {
            j++;
        }
    }
    cout<<"Minimum number is: "<<arr[i]<<endl;
    

    return 0;
}