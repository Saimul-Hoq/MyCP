#include<iostream>
#include<map>
#include<queue>
#include<algorithm>
using namespace std;
#define endl "\n"



class Max
{
    public:
    long long val;
    long long occur;

};


class cmp
{
    public:
    bool operator()(Max l, Max r)
    {
        if(l.occur == r.occur)
        {
            return l.val<r.val;
        }
        return l.occur<r.occur;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long qq;
    scanf("%lld", &qq);
    priority_queue<Max, vector<Max>, cmp>q;
    map<long long,long long>mp;
    while(qq--)
    {
        
        int d;
        scanf("%d", &d);
        if(d==1)
        {
            
            long long x;
            scanf("%lld", &x);
            mp[x]++;
            Max m;
            m.val=x;
            m.occur=mp[x];
            q.push(m);
            
        }
        else if(d==2)
        {
            if(!q.empty())
            {
                Max temp = q.top();
                q.pop();
                long long val = temp.val;
                long long occur = temp.occur;
                printf("%lld\n", val);
               
                occur=occur/2;
                if(occur<1)
                {
                    occur = 1;
                }
                //occur = max(1, occur);
                mp[val] = mp[val]-occur;
                if(mp[val]<0)
                {
                    mp[val] = 0;
                }
                //mp[val] = max(0, mp[val]);
                Max m;
                m.val = val;
                m.occur = mp[val];
                q.push(m);
            }
            else
            {
               printf("empty\n");

            }
        }
        
    }
    
    
    return 0;
}