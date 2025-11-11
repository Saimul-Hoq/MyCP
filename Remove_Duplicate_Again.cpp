#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>l;

    int n;
    while(1)
    {
        cin>>n;
        if(n==-1)
        {
            break;
        }
        l.push_back(n);
    }

    l.sort();
    l.unique();

    cout<<l.front();
    
    for(auto it=next(l.begin(), 1); it!=l.end(); it++)
    {
        cout<<" "<<*it;
    }
    cout<<endl;


    
    
    return 0;
}