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
        int a,b;
        cin>>a>>b;
        
        while(1)
        {
            int k =2*a;
            if(k<=b)
            {
                cout<<a+k<<endl;
                break;
            }
            a--;
        }
        
    }

    
    
    return 0;
}