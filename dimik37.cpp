#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, rev=0;
        cin>>n;

        while(n!=0)
        {
            rev = (rev*10) + n%10;
            n = n/10;
        }

        cout<<rev<<endl;
    }

    return 0;
}