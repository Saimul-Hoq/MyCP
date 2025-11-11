#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);
    int t;
    cin>>t;

    while(t--)
    {
        int x,n;
        cin>>x>>n;

        if(x>n)
        {
            cout<<"Invalid!"<<endl;
        }
        else
        {
            for(int i=x; i<=n; i+=x)
            {

                cout<<i<<endl;

            }
        }


        cout<<endl;
    }

    return 0;
}
