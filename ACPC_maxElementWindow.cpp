#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n, k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    deque<int>dq;
    
    for(int r=0; r<n; r++)
    {
        
        while(!dq.empty() && arr[dq.back()]<=arr[r])
        {
            dq.pop_back();
        }
        dq.push_back(r);

        if(dq.front()<=r-k) dq.pop_front();

        if(r >= k-1)
        {
            cout<<arr[dq.front()]<<" ";
        }
        
        

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