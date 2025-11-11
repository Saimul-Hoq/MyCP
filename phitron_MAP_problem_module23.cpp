#include<bits/stdc++.h>
using namespace std;

int main()
{
    string line, word;
    getline(cin, line);

    stringstream ss(line);
    map<string, int> mp;

    while(ss>>word)
    {
        mp[word]++;
    }

    for(auto it = mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<" = "<<it->second<<endl;
    }

    
    
    return 0;
}