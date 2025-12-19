#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    ll n,k;
    cin>>n>>k;
    vector<int>arr(n);
    multiset<int>ms, ms2;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        ms.insert(arr[i]);
    }
    vector<int>b;
    sort(arr.begin(), arr.end());
    bool check=true;
    for(int i=0; i<n; i++)
    {
        int val = arr[i];
        if(ms.find(val)!=ms.end())
        {
            b.push_back(val);
            int num=val;
            for(int i=1; val*i<=k; i++)
            {
                num = val*i;
                auto it = ms.find(num);
                if(it!=ms.end())
                {
                    ms.erase(num);
                    ms2.insert(num);
                }
                else if(ms2.find(num)==ms2.end())
                {
                    check=false;
                    break;
                }
            }

        }
        if(check==false) break;
    }
    
   
    
    if(check)
    {
        cout<<b.size()<<endl;
        for(int val: b)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    else cout<<-1<<endl;
    

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