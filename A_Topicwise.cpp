#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    string d;
    cin>>d;
    int i;
    for(i=0; d[i]!='.'; i++);
    if(d[i-1]=='9')
    {
        cout<<"GOTO Vasilisa."<<endl;
    }
    else
    {
        int n = d[i+1] - 48;
        d.resize(i);
        i--;
        int num = d[i] - 48;
        if(n>=5)
        {
            num++;
            d[i] = num + 48;
        }
        cout<<d<<endl;
    }
    
    
    return 0;
}