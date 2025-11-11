#include<bits/stdc++.h>
using namespace std;

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
        int index=-1;
        
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                index=i;
                break;
            }
        }

        if(index==-1)
        {
            cout<<0<<endl;
        }
        else
        {
            int sum1=0, sum0=0, count=0;
            int i=index;
            for(int j=index; j<n; j++)
            {
                if(s[i]=='1' && s[i]!=s[j])
                {
                    sum1+=1;
                    i=j;
                    j--;
                }
                else if(s[i]=='0' && s[i]!=s[j])
                {
                    sum0+=1;
                    i=j;
                    j--;
                }
            }

            cout<<sum1+sum0+1<<endl;
        }

        
        

        
    }
    
    
    return 0;
}