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
        int temp = sqrt(n);
        int num = temp*temp;
       
        if(num!=n)
        {
            cout<<-1<<endl;
        }
        else
        {
            if(n==0)
            {
                cout<<0<<" "<<0<<endl;
            }
            else
            {
                cout<<1<<" "<<temp-1<<endl;
            }
            
        }
    }
    
    
    
    return 0;
}