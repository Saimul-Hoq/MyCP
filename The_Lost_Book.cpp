#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int val;
    map<int, int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>val; 
        mp[val] = i;    
    }
    int target;
    cin>>target;
    if(mp.count(target))
    {
        cout<<mp[target]<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    
    
    return 0;
}