#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            mp[val%10]++;
        }
        bool check=false;
        for(int i=0; i<=9; i++)
        {
            for(int j=0; j<=9; j++)
            {
                for(int k=0; k<=9; k++)
                {
                    if((i+j+k)%10==3)
                    {
                        mp[i]--;
                        mp[j]--;
                        mp[k]--;
                        if(min({mp[i], mp[j], mp[k]})>=0)
                        {
                            check=true;
                        }
                        mp[i]++;
                        mp[j]++;
                        mp[k]++;
                    }
                }
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
    }

    
    
    return 0;
}