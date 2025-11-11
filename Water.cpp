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
        priority_queue<pair<int,int> >q;
        for(int i=0; i<n; i++)
        {
            int ht;
            cin>>ht;
            q.push(make_pair(ht, i));
        }

        
        int highesti = q.top().second;
        q.pop();
        int higheri = q.top().second;
        q.pop();

        if(highesti < higheri)
        {
            cout<<highesti<<" "<<higheri<<endl;
        }
        else
        {
            cout<<higheri<<" "<<highesti<<endl;

        }

       
    }
    
    
    return 0;
}