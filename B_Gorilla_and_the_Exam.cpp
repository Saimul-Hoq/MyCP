#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > >min_heap;
        priority_queue<pair<int,int> >max_heap;
        map<int,int>mp;
        
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            int val = arr[i];
            int freq = mp[arr[i]];
            min_heap.push(make_pair(freq, val));
            max_heap.push(make_pair(freq, val));

        }
        while(k>0 && (max_heap.top() != min_heap.top()))
        {
            int max_val = max_heap.top().second;
            int max_freq = max_heap.top().first;
            int min_val = min_heap.top().second;
            int min_freq = min_heap.top().first;
            
            if(k>=min_freq)
            {
                max_heap.pop();
                min_heap.pop();
                
                k = k-min_freq;
                mp[max_val] = mp[max_val] + k;
                mp[min_val] = 0;
                max_heap.push(make_pair(mp[max_val], max_val));
            }

        }

        cout<<min_heap.size()<<endl;

    }
    
    
    return 0;
}