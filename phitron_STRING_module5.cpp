#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     string str;
//     cin>>str;

//     for(string:: iterator it = str.begin(); it<str.end(); it++)
//     {
//         cout<<*it<<endl;
//     }

//     for(auto it = str.begin(); it<str.end(); it++)
//     {
//         cout<<*it<<endl;
//     }

//     return 0;
// }

int main()
{
    string line, word;
    getline(cin, line);

    stringstream ss(line);

    while(ss >> word)
    {
        cout<<word<<endl;
    }



    return 0;
}