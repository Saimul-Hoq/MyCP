#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    string s;
    cin>>s;
    vector<string>v;
    v.push_back("00:00");
    v.push_back("11:11");
    v.push_back("22:22");
    bool check=false;
    for(string str: v)
    {
        if(s<=str)
        {
            cout<<str<<endl;
            check=true;
            break;
        }
    }
    if(!check) cout<<v[0]<<endl;


}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        saim();
    }

    
    
    return 0;
}