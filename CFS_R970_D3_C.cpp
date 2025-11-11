#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int l, r;
        cin>>l>>r;
        int count=0;

        for(int i=l; i<=r; i+=count)
        {
            count++;
        }

        cout<<count<<endl;
    }
}