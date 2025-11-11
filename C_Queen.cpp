#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int n;
vector<int>v;

// int dfs(int i, pair<int, vector<int>> arr[])
// {
//     if(arr[i].second.size()==0)
//     {
//         if(arr[i].first == 1)
//         {
//             v.push_back(i);
//             return 1;
//         }
//         return 0;
//     }

//     int val=1;
//     for(int j: arr[i].second)
//     {
//         int k = dfs(j, arr);
//         val = val*k;
//     }

//     if(val*arr[i].first==1)
//     {
//         v.push_back(i);
//     }

//     return arr[i].first;
// }

void solve(int root, pair<int,vector<int>> arr[])
{
    for(int i=1; i<=n; i++)
    {
        if(i!=root)
        {
            int val = 1;
            for(int j: arr[i].second)
            {
                val = val*arr[j].first;
            }
            if(val*arr[i].first == 1)
            {
                v.push_back(i);
            }
        }
    }
}

void saim()
{
    cin>>n;
    pair<int, vector<int>> arr[n+1];
    int root;
    for(int i=1; i<=n; i++)
    {
        int a,b;
        cin>>a>>b;
        arr[i].first = b;
        if(a==-1)
        {
            root = i;
            continue;
        }
        arr[a].second.push_back(i);
    }
    v.clear();
    //dfs(root, arr);
    solve(root, arr);
    sort(v.begin(), v.end());

   
    if(n==1 || v.empty()) 
    {
        cout<<-1<<endl;
        return;
    }
    for(int val: v)
    {
        cout<<val<<" ";
    }
    cout<<endl;

}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    saim();
    
    
    return 0;
}