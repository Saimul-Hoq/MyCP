#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


int saim()
{
    int n;
    cin>>n;
    int x;
    while(1)
    {
        for(int i=2; i<=n; i++)
        {
            cout<<i-1<<" "<<i<<endl;
            cout.flush();
            cin>>x;
            if(x==-1) return -1;
            if(x==1) return 0;
        }

        for(int i=1; i<=n; i++)
        {
            for(int j=i+2; j<=n; j++)
            {
                cout<<i<<" "<<j<<endl;
                cout.flush();
                cin>>x;
                if(x==-1) return -1;
                if(x==1) return 0;
            }
        }
    }
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int i = saim();
        if(i==-1) break;

    }

    
    
    return 0;
}