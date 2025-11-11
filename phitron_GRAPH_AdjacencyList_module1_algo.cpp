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

    //Directed Graph:
    // for(int i=0; i<e; i++)
    // {
    //     cin>>a>>b;
    //     arr[a].push_back(b);
    // }


    for(int i=0; i<n; i++)
    {
        cout<<i<<" -> ";
        for(int x: arr[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    
    return 0;
}