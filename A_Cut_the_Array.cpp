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
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            sum+=val;
        }
        if(sum%3==0)
        {
            cout<<"1 2"<<endl;
        }
        else
        {
            cout<<"0 0"<<endl;
        }
    }

    
    
    return 0;
}