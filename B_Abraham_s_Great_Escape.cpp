#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n,k;
    cin>>n>>k;
    int ck;
    if((n*n)-k == 1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int r=1; r<=n; r++)
        {
            for(int c=1; c<=n; c++)
            {
                if(k!=0)
                {
                    cout<<"U";
                    k--;
                    ck=r;
                }
                else if(r==ck && c==n)
                {
                    cout<<"D";
                }
                else
                {
                    ck=-1;
                    if(c==n)
                    {
                        cout<<"L";
                    }
                    else
                    {
                        cout<<"R";
                    }
                }
            }
            cout<<endl;
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
        saim();
    }

    
    
    return 0;
}