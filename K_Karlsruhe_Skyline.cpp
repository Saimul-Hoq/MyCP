#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n,a,b;
    cin>>n>>a>>b;
    if(a==1 && b==1)
    {
        cout<<"no"<<endl;
        return;
    }
    
    vector<int>arr;
    for(int i=1; i<=n; i++)
    {
        arr.push_back(i);
    }
    deque<int>ans;
    if(b==1)
    {
        
        a--;
        int p = n-1-a;
        for(int i=p; i<n-1; i++)
        {
            ans.push_back(arr[i]);
        }
        for(int i=0; i<p; i++)
        {
            ans.push_back(arr[i]);
        }
        ans.push_back(arr[n-1]);
        cout<<"yes"<<endl;
        for(int val: ans)
        {
            cout<<val<<" ";
        }
        cout<<endl;
        return;

    }
    int j=n-a;
    for(int i=(n-a); i<n; i++)
    {
        ans.push_back(arr[i]);
    }
    int k=n-a;
    if(b>(k+1))
    {
        cout<<"no"<<endl;
        return;
    }

    k = k-(b-1);
    for(int i=0; i<k; i++)
    {
        ans.push_back(arr[i]);
    }
    for(int i=j-1; i>=k; i--)
    {
        ans.push_back(arr[i]);
    }
    cout<<"yes"<<endl;
    for(int val: ans)
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