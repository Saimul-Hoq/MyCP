#include<bits/stdc++.h>
using namespace std;




class Store
{
    public:
    int val;
    long long sum;
    priority_queue<int, vector<int>, greater<int> >q;
};

bool cmp(Store l, Store r)
{
    return l.sum<r.sum;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        vector<Store> v(n);
        long long sum = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int num;
                cin>>num;
                sum+=num;
                v[i].q.push(num);
            }
            v[i].val = i+1;
            v[i].sum = sum;
            sum=0;
 
        }
        
        sort(v.begin(), v.end(), cmp);
        int recent=-5;
        bool flag = false;
        bool check = false;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                int current = v[j].q.top();
                v[j].q.pop();

                if(current<=recent)
                {
                    flag = true;
                    check = true;
                    break;
                }
                recent = current;
            }
            if(check)
            {
                break;
            }
        }
        if(flag)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(Store s: v)
            {
                cout<<s.val<<" ";
            }
            cout<<endl;
        }

    }
    
    
    return 0;
}