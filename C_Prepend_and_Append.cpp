#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i,j;
        for(i=0, j=n-1; i<j; i++,j--)
        {
            if(s[i]==s[j])
            {
                break;
            }
        }
        cout<<j-i+1<<endl;
    }
    
    
    return 0;
}