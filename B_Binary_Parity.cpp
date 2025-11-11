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
        int n;
        cin>>n;
        int count=0;
        for(int k=31; k>=0; k--)
        {
            if(((n>>k)&1)==1)
            {
                count++;
            }
        }

        if(count%2==0)
        {
            cout<<"EVEN"<<endl;
        }
        else
        {
            cout<<"ODD"<<endl;
        }
    }

    
    
    return 0;
}