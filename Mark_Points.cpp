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
        string s;
        cin>>s;
        int count=0;
        bool check=true;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                count++;
            }
            if(s[i]=='0'|| i==(n-1))
            {
                if(count!=0 && count<3)
                {
                    check = false;
                    break;
                }
                count=0;
            }
        }
        if(check)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }


    
    
    return 0;
}