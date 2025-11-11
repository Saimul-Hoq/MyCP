#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;

    for(int i=0; i<a.length(); i++)
    {
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
    }

    if(a.compare(b)>0)
    {
        cout<<1<<endl;
    }
    else if(a.compare(b)<0)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }

    return 0;
}





/*int main()
{
    string a,b;
    cin>>a>>b;
    for(int i=0; i<a.size(); i++)
    {
        a[i]=towlower(a[i]);
        b[i]=towlower(b[i]);
    }

    cout<<a.compare(b)<<endl;
    return 0;
}*/