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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int a=0, b=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                a++;
            }
            else
            {
                b++;
            }
        }
      
        int temp = n-(k*2);
        temp = temp/2;
        if(a<temp || b<temp)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if((temp%2==0 && a%2==0) || (temp%2==1 && a%2==1))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }

    }
    
    
    return 0;
}