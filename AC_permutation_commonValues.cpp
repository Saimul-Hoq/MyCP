#include<bits/stdc++.h>
using namespace std;

set<vector<int> > permuted;

void permutation(int i, vector<int>v, vector<int>carr)
{
    if(i<0)
    {
        permuted.insert(v);
        return;
    }

    for(int k=0; k<carr.size(); k++)
    {
        v.push_back(carr[k]);
        vector<int>temp(carr);
        temp.erase(temp.begin()+k);
        permutation(i-1, v, temp);
        v.pop_back();
    }
}

int main()
{
    int n;
    vector<int>arr;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }
    sort(arr.begin(), arr.end());
    vector<int>v;

    permutation(n-1, v, arr);
    cout<<"Output: "<<endl;
    for(auto vec: permuted)
    {
        for(int i: vec)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    return 0;
}