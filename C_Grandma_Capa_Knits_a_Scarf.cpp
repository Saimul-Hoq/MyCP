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
        int result=INT_MAX;
    
        for(char ch = 'a'; ch<='z'; ch++)
        {
            int l=0, r=n-1, cur=0;
            while(l<r)
            {
                if(s[l]==s[r])
                {
                    l++;
                    r--;
                }
                else
                {
                    if(s[l]==ch)
                    {
                        l++;
                        cur++;
                    }
                    else if(s[r]==ch)
                    {
                        r--;
                        cur++;
                    }
                    else
                    {
                        cur=INT_MAX;
                        break;
                    }
                }
            }

            result = min(result, cur);
        }

        if(result==INT_MAX)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<result<<endl;
        }
    }
    
    
    return 0;
}