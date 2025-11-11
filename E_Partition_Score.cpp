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
        int n,k;
        cin>>n>>k;
        priority_queue<int>pq;
        
        int sa,sb;
        if(k<=(n-k))
        {
            sa=k;
            sb=n-k;
        }
        else
        {
            sa=n-k;
            sb=k;
        }
        vector<int>a(sa);
        vector<int>b(sb);
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            pq.push(val);
        }

        a[0] = pq.top();
        pq.pop();
        b[0] = pq.top();
        pq.pop();

       
        for(int i=1; i<sa; i++)
        {
            a[i] = pq.top();
            pq.pop();
        }
         for(int i=1; i<sb; i++)
        {
            b[i] = pq.top();
            pq.pop();
        }

        cout<<a.front() + a.back() + b.front() + b.back()<<endl;
    }
    
    
    return 0;
}