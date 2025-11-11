#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

bool cmp(pair<int,int>l, pair<int,int>r)
{
    return l.second<r.second;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    vector<pair<int,int>>arr;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        arr.push_back({a,b});
    }

    sort(arr.begin(), arr.end(), cmp);

    int al=arr[0].first, ar=arr[0].second;
    int bl, br;
    int count=1;
    for(int i=1; i<n; i++)
    {
        bl = arr[i].first;
        br = arr[i].second;
        if(br>ar && bl>=ar)
        {
            count++;
            al=bl;
            ar=br;
        }
    }

    cout<<count<<endl;
    
    
    return 0;
}