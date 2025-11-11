#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    priority_queue<int, vector<int>, greater<int> >pq;

    int val;
    while(n--)
    {
        cin>>val;
        pq.push(val);
    }

    int q;
    cin>>q;
    while(q--)
    {
        int command, x;
        cin>>command;

        if(command==0)
        {
            cin>>x;
            pq.push(x);
            cout<<pq.top()<<endl;
        }
        else if(command==1)
        {
            if(!pq.empty())
            {
                cout<<pq.top()<<endl;
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
        else
        {
            if(!pq.empty())
            {
                pq.pop();
            }
            if(!pq.empty())
            {
                cout<<pq.top()<<endl;
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }

        
    }
    
    
    return 0;
}