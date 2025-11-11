#include<bits/stdc++.h>
using namespace std;

int main()
{
    //create:
    map<string, int>mp;

    //insert:
    mp["bb"] = 200;
    mp["cc"] = 33;
    mp["aa"] = 50;
    // cout<<mp["mahbub"]<<endl;
    // cout<<mp["salman"]<<endl;

    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<" "<<(*it).second<<endl;
    }

    //check avaivalibity:
    if(mp.count("aa"))
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
    
    
    
    return 0;
}