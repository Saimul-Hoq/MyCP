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
        int n,m;
        cin>>n>>m;
        vector<vector<ll>>arr(n, vector<ll>(m));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>arr[i][j];
            }
        }
        bool check1 = false;
        for(int k=0; k<64; k++)
        {
            bool check2 = true;
            for(int i=0; i<n; i++)
            {
                bool check3 = false;
                for(int j=0; j<m; j++)
                {
                    if(((arr[i][j]>>k)&1)==1)
                    {
                        check3=true;
                        break;
                    }
                }
                if(check3==false)
                {
                    check2=false;
                    break;
                }
            }
            if(check2)
            {
                check1=true;
                break;
            }
        }

        if(check1)
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