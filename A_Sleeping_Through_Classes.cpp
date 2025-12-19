#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int cnt=0;
    int skip=-1;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            skip = i + k;
        }   
        else if(i>skip)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
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