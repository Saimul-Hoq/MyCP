#include<bits/stdc++.h>
using namespace std;

int n;
vector<int>arr;
set<vector<int> > subsets;

void get_subsets(int i, vector<int> v)
{
    if(i<0)
    {
        subsets.insert(v);
        return;
    }
    
    get_subsets(i-1, v);
    v.push_back(arr[i]);
    get_subsets(i-1, v);
}

int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }
    vector<int>v;
    sort(arr.begin(), arr.end());

    get_subsets(n-1, v);

    cout<<"Output"<<endl;
    for(vector<int> vec: subsets)
    {
        if(vec.empty())
        {
            cout<<"{ }";
        }
        else
        {
            for(int i: vec)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    
    
    return 0;
}