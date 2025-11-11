#include<bits/stdc++.h>
using namespace std;

long long input;

bool reach_value(long long num)
{
    if(input==num)
    {
        return true;
    }
    else if(input<num)
    {
        return false;
    }

    return reach_value(num*10) || reach_value(num*20);
}

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        cin>>input;
        if(reach_value(1))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
    
    return 0;
}

