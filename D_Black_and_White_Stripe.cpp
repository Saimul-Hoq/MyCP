#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count=0;
        int l=0, r=k-1;
        for(int i=0; i<k; i++)
        {
            if(s[i]=='W')
            {
                count++;
            }
        }
        int fcount = count;
        while(1)
        {
            l++;
            r++;
            if(r==n)
            {
                break;
            }
            if(s[l-1]=='W')
            {
                count--;
            }
            if(s[r]=='W')
            {
                count++;
            }
            fcount = min(fcount, count);
            
        }
        cout<<fcount<<endl;
    }
    
    
    
    return 0;
}