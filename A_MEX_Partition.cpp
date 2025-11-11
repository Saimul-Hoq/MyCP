#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n;
    cin>>n;
    set<int>arr;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        arr.insert(val);
    }
    
    int mx=-1, i=0;
    n = arr.size();
    for(int val: arr)
    {
        if(val!=i)
        {
            mx=i;
            break;
        }
        i++;
    }
    if(mx==-1) cout<<n<<endl;
    else cout<<mx<<endl;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        saim();
    }

    
    
    return 0;
}