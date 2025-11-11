#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        stack<char>st;

        string s;
        cin>>s;
        

        for(char ch: s)
        {
            if(st.empty())
            {
                st.push(ch);
            }
            else
            {
                if(ch=='1')
                {
                    if(st.top()=='0')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(ch);
                    }
                }

                else if(ch=='0')
                {
                    if(st.top()=='1')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(ch);
                    }
                }
            }
        }

        if(st.empty())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }


    
    return 0;
}