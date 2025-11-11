#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x,k, result=0;
        cin>>x>>k;

        for(int i=0; i<=k; i++)
        {
            result+=pow(x, i);
        }

        cout<<"Result = "<<result<<endl;
    }

    return 0;
}