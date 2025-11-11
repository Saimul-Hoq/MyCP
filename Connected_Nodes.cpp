#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin>>n>>e;
    vector<int> arr[n];
    int a, b;

    //Undirected Graph:
    for(int i=0; i<e; i++)
    {
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    for(int i=0; i<n; i++)
    {
        sort(arr[i].begin(), arr[i].end(), greater<int>());
    }

    int q;
    cin>>q;
    while(q--)
    {
        int nd;
        cin>>nd;
        if(arr[nd].empty())
        {
            cout<<-1<<endl;
        }
        else
        {
            for(int i: arr[nd])
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }

    
    
    
    return 0;
}