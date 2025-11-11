#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    if(n%2==1)
    {
        
        n-=3;
        int k=n/2;
        cout<<k+1<<endl;
        while(k--)
        {
            cout<<2<<" ";
        }
        cout<<3<<" ";
        cout<<endl;
    }
    else
    {
        int k=n/2;
        cout<<k<<endl;
        while(k--)
        {
            cout<<2<<" ";
        }
        cout<<endl;
    }
   

    
    
    return 0;
}