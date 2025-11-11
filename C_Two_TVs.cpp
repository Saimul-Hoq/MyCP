#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    map<int,int>mp;
    int t=n;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        mp[l]++;
        mp[r+1]--;
    }
    bool check=true;
   
    int sum=0;
    for(auto [min, show]: mp)
    {
        sum+=show;
        if(sum>2)
        {
            check=false;
            break;
        }   
    }
   
    if(check)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    
    
    return 0;
}