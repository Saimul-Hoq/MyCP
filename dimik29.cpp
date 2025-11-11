#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    

    while(t--)
    {
        char ch;
        cin>>ch;

        if(ch>='a' && ch<='z')
        {
            cout<<"Lowercase Character"<<endl;
        }
        else if(ch>='A' && ch<='Z')
        {
            cout<<"Uppercase Character"<<endl;
        }
        else if(ch>='0' && ch<='9')
        {
            cout<<"Numerical Digit"<<endl;
        }
        else if(ch>32 && ch<=126)
        {
            cout<<"Special Character"<<endl;
        }

    }



    return 0;
}