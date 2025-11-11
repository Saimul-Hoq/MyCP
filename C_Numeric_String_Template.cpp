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
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int m;
        cin>>m;

        string s;
       

        while(m--)
        {
            bool flag=true;
            map<char, int>mp;
            map<int, char>mp2;

            cin>>s;
            if(s.size()!=n)
            {
                flag=false;
            }
            else
            {
                for(int i=0; i<n; i++)
                {
                    char ch = s[i];
                    if(mp.count(ch))
                    {
                        if(mp[ch]!=arr[i])
                        {
                            flag=false;
                            break;
                        }
                    }
                    if(mp2.count(arr[i]))
                    {
                        if(mp2[arr[i]]!=ch)
                        {
                            flag=false;
                            break;
                        }
                    }
                    mp[ch]=arr[i];
                    mp2[arr[i]]=ch;
                }
            }

            if(flag)
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