#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>st;
    queue<int>q;

    int n, m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        st.push(val);

    }

    for(int i=0; i<m; i++)
    {
        int val;
        cin>>val;
        q.push(val);

    }

    bool check = true;

    if(n!=m)
    {
        check = false;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(st.top()!=q.front())
            {
                check=false;
                break;
            }
            st.pop();
            q.pop();
        }
    }

    if(check)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}