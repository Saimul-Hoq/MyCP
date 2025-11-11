#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n,k;
    cin>>n>>k;
    vector<int>arr;
    map<int, int>mp;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
        mp[val]++;
    }

    if(mp.size()==n)
    {
        for(int i=arr.size(); k>0; i++, k--)
        {
            arr.push_back(arr[i-3]);
        }
    }
    else
    {
        int cnt=0;
        for(int i=1; i<=n && k>0; i++)
        {
            if(mp.find(i)==mp.end())
            {
                arr.push_back(i);
               
                k--;
                cnt++;
            }
        }
        if(cnt<=2 && k>0)
        {
            for(int i=1; i<=n && cnt<3; i++)
            {
                if(mp[i]==1) 
                {
                    arr.push_back(i);
                    mp[i]++;
                    cnt++;
                    k--;
                    i=1;
                }
            }
        }
        if(cnt<=2)
        {
            for(int i=0; i<n; i++)
            {
                arr.push_back(arr[i]);
                cnt++;
                if(cnt==3)
                {
                    break;
                }
            }
        }
        if(k>0)
        {
            
            for(int i=arr.size(); k>0; i++, k--)
            {
                arr.push_back(arr[i-3]);
            }
        }
        
    }

    for(int i=n; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;







    // for(int i=1; i<=n && k>0; i++)
    // {
    //     if(mp.find(i)==mp.end())
    //     {
    //         arr.push_back(i);
    //         k--;
    //     }
    // }
    // if(k>0)
    // {
    //     for(int i=arr.size(); k>0; i++, k--)
    //     {
    //         arr.push_back(arr[i-3]);
    //     }
    // }
    // for(int i=n; i<arr.size(); i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

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