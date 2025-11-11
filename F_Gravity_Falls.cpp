#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>>arr;
        for(int p=0; p<n; p++)
        {
            int k;
            cin>>k;
            vector<int>carr(k);
            for(int i=0; i<k; i++)
            {
                cin>>carr[i];
            }
            arr.push_back(carr);
        }
        while(!arr.empty())
        {
            sort(arr.begin(), arr.end());
            vector<int>v;
            v = arr[0];
            for(int val: v)
            {
                cout<<val<<" ";
            }
            int sz = v.size();
            vector<vector<int>>z;
            for(int i=0; i<arr.size(); i++)
            {
                if(arr[i].size()>sz)
                {
                    arr[i].erase(arr[i].begin(), arr[i].begin()+sz);
                    z.push_back(arr[i]);
                }
            }
            arr = z;
        }
        cout<<endl;
    }

    
    
    return 0;
}