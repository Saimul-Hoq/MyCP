#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        map<string, int>mp;
        string line, word;
        //cin.ignore();
        getline(cin, line);

        stringstream ss(line);


        ss>>word;
        mp[word]++;
        string max_key = mp.begin()->first;


        while(ss>>word)
        {
            mp[word]++;
            if(mp[max_key]<mp[word])
            {
                max_key=word;
            }
        }


       

        cout<<max_key<<" "<<mp[max_key]<<endl;
        
    }
    
    
    return 0;
}