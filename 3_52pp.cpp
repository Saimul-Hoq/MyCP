#include<iostream>
using namespace std;

int main()
{
    int cnt=0;
    for(int i=1000; i>=1; i--)
    {
        cout<<i<<"\t";
        cnt++;
        if(cnt==5)
        {
            cout<<endl;
            cnt=0;
        }
    }
    return 0;
}