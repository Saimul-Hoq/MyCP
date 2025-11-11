#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int count=0, check=1;
        for(int i=0; i<n; i++)
        {
            if(check==1 && v[i]>d)
            {
                count++;
                check = 0;
            }
            else if(check==0 && v[i]<=d)
            {
                count++;
                check=1;
            }
        }
        cout<<count<<endl;
    }

    
    
    return 0;
}