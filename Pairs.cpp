#include<bits/stdc++.h>
using namespace std;

class Pair
{
    public:
    string s;
    int val;
};

class cmp
{
    public:
    bool operator()(Pair l, Pair r)
    {
        if(l.s == r.s)
        {
            return l.val<r.val;
        }
        return l.s>r.s;
    }
};

int main()
{
    priority_queue<Pair, vector<Pair>, cmp>pq;

    int n;
    cin>>n;
    while(n--)
    {
        Pair p;
        cin>>p.s>>p.val;
        pq.push(p);
    }

    while(!pq.empty())
    {
        cout<<pq.top().s<<" "<<pq.top().val<<endl;
        pq.pop();
    }
    
    
    return 0;
}