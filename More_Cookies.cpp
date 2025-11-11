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
        int n,c;
        cin>>n>>c;
        multiset<int>ms;
        bool check1=true;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            if(val==c)
            {
                check1=false;
            }
            ms.insert(val);
        }
        bool check2 = false;
        if(*ms.begin() < c)
        {
            check2=true;
        }
        if(check1 && check2)
        {
            cout<<0<<endl;
        }
        else
        {
            c++;
            int cnt=1;
            while(ms.count(c)>0 || *ms.begin()>=c)
            {
                c++;
                cnt++;
            }
            cout<<cnt<<endl;
        }


        
    }

    
    
    return 0;
}