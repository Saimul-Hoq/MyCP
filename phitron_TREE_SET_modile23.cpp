#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;

    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        s.insert(val);
    }

    for(auto it=s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<endl;
    }

    if(s.count(3))
    {
        cout<<"Paisiii "<<endl;
    }
    else
    {
        cout<<"Painai"<<endl;
    }
    
    
    return 0;
}