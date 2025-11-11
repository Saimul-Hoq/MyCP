#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"Enter-1, for coffee."<<endl<<"Enter-2, for tea."<<endl;
    cin>>choice;
    if(choice==1)
    {
        cout<<"Your coffee is on it's way. Thank You"<<endl;
    }
    else if(choice==2)
    {
        cout<<"Your tea is on it's way. Thank You."<<endl;
    }
    else
    {
        cout<<"You have entered a wrong option."<<endl;
    }
    return 0;
}