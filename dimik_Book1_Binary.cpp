#include<iostream>
using namespace std;
#include<math.h>
#define endl "\n"

int bin_dec(string bin)
{
    int dec=0, num;
    for(int i=bin.length()-1, j=0; i>=0; i--, j++)
    {
        num=bin[i]-48;
        dec+=(num*pow(2, j));

    }

    return dec;

}

void dec_bin(int dec)
{
    int arr[32],i;

    for(i=0; dec!=0; i++)
    {
        arr[i]=dec%2;
        dec=dec/2;
    }
    cout<<"Binary = ";
    for(int j=i-1; j>=0; j--)
    {
        cout<<arr[j];
    }
    cout<<endl;
}

int main()
{
    string bin;
    int dec, n;

    cout<<"1. bin - dec: "<<endl;
    cout<<"2. dec - bin: "<<endl;
    cin>>n;
    
    if(n==1)
    {
        cout<<"Enter binary number: ";
        cin>>bin;

        cout<<"Decimal = "<<bin_dec(bin)<<endl;
    }
    else if(n==2)
    {
        cout<<"Enter decimal number: ";
        cin>>dec;
        dec_bin(dec);

    }



    return 0;
}