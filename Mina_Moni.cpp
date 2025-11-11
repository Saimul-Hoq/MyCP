#include<bits/stdc++.h>
using namespace std;

int n;
int total_sum;
vector<int>arr;
priority_queue<int, vector<int>, greater<int> >q;


void subsets(int i, vector<int>v)
{
    if(i<0)
    {
        int half = n/2;
        int sum1=0, sum2=0;
        if(v.size()==half)
        {
            for(int i=0; i<v.size(); i++)
            {
                sum1+=v[i];
            }
            sum2 = total_sum - sum1;
            int dif = abs(sum1 - sum2);
            q.push(dif);
        }

        return;
    }
    
    subsets(i-1, v);
    v.push_back(arr[i]);
    subsets(i-1, v);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        total_sum=0;
        vector<int>carr;
        arr = carr;
        priority_queue<int, vector<int>, greater<int> >q2;
        q = q2;
        


        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            arr.push_back(val);
            total_sum+=val;
        }

        vector<int>v;
        subsets(n-1, v);
        cout<<q.top()<<endl;
    }
   
    
    return 0;
}