#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        vector<int>arr;
        priority_queue<int>pq;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            if(val<=c)
            {
                pq.push(val);
            }
            else
            {
                arr.push_back(val);
            }
        }

        long long m=1;
        while(!pq.empty())
        {
            long long val = pq.top();
            pq.pop();
            
            if((val*m)>c)
            {
                arr.push_back(val);
            }
            else
            {
                m*=2;
            }
        }

        cout<<arr.size()<<endl;
    }

    
    
    return 0;
}