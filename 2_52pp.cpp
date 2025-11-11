#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int n; 
    cin>>n;

    string str;
    for(int i=0; i<n; i++)
    {
        cin>>str;

        int num=str[str.length()-1];
        
        if(num%2==0)
        {
            cout<<"even";
        }
        else
        {
            cout<<"odd";
        }
        cout<<endl;
    }

    return 0;
}