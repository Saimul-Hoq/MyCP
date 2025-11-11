#include<iostream>
using namespace std;
int main()
{
    int currval, val, cnt=1;
    cout<<"Enter some numbers: "<<endl;
    cin>>currval;
    while(cin>>val)
    {
        if(val==currval)
        {
            cnt++;
        }
        else
        {
            cout<<currval<<" occured "<<cnt<<" times. "<<endl;
            currval=val;
            cnt=1;
        }
    }
    cout<<currval<<" occured "<<cnt<<" times. "<<endl;
    return 0;
}