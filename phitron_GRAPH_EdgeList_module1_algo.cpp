#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin>>n>>e;
    vector< pair<int, int> >edge_list;
    int a, b;
    for(int i=0; i<e; i++)
    {
        cin>>a>>b;
        edge_list.push_back(make_pair(a,b));
    }

    cout<<"Output: "<<endl;
    for(auto p: edge_list)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    
    
    return 0;
}