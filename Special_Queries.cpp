#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<string>line;

    int q;
    cin>>q;
    while(q--)
    {
        int n;
        string name;

        cin>>n;
        

        if(n==0)
        {
            cin>>name;
            line.push(name);
        }
        else
        {
            if(!line.empty())
            {
                cout<<line.front()<<endl;
                line.pop();
            }
            else
            {
                cout<<"Invalid"<<endl;
            }
        }
    }
    
    
    return 0;
}