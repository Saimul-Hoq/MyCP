#include<iostream>
using namespace std;
int main()
{
    int num, original, reverse=0;
    cout<<"Enter any number: ";
    cin>>num;
    original = num;
    while(num>0)
    {
      reverse = (reverse*10)+num%10;
      num=num/10;  
    }
    if(original==reverse)
    {
        cout<<original<<" is a Palindrome number.";
    }
    else
    {
        cout<<original<<" is not a Palindrome number.";
    }
    return 0;
}