#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cin>>a;
    for(int i=0; i<a.size(); i++)
    {
        a[i]=towupper(a[i]);
    }

    cout<<a<<endl;
    return 0;
} 