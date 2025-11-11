#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i,j;
        int sz = s.size();
        for(i=0, j=1; j<sz; i++,j++)
        {
            if(s[i]==s[j])
            {
                if((i-1) >=0)
                {
                    s[i] = s[i-1];
                    
                }
                else if(i+2 <= s.size()-1)
                {
                    s[i] = s[i+2];
                }
                s.erase(j, 1);
                sz--;
                i=-1;
                j=0;
            }
            
        }

        cout<<sz<<endl;
        


    }
    
    
    return 0;
}

