#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

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
        vector<pair<int,int>>arr;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            arr.push_back({val,1});
        }
        int p=n, i=n-2, j=n-1;
        if(n==1)
        {
            cout<<1<<endl;
        }
        else
        {
            while(i>=0)
            {
                auto [a, fa] = arr[i];
                auto [b, fb] = arr[j];
                if(b-a >=2)
                {
                    i--;
                    j--;
                    while(arr[j].second==0)
                    {
                        j--;
                    }
                }
                else
                {
                    arr[i].second=0;
                    i--;
                    p--;
                }
            }
            cout<<p<<endl;
        }
    }

    
    
    return 0;
}