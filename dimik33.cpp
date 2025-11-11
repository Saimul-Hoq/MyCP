#include<bits/stdc++.h>
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
        long long a, b, c;
        cin>>a>>b>>c;

        long long i;
        //for(i=c; i<a; i+=c);
        //for(; (i%c)!=0; i++);

        if(a<c)
        {
            i=c;
        }
        else if(a%c==0)
        {
            i=a;
        }
        else
        {
            i=((a/c)+1)*c;
        }
        
        
        

        for(; i<=b; i+=c)
        {
            cout<<i<<endl;
        }

        cout<<endl;
        
    }

    return 0;
}