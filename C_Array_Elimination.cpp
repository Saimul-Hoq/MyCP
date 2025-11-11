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
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        vector<int>v(32, 0);
        for(int val: arr)
        {
            for(int k=0; k<=31; k++)
            {
                if(((val>>k)&1)==1)
                {
                    v[k]++;
                }
            }
        }
        vector<int>ans;
        ans.push_back(1);
        for(int k=2; k<=n; k++)
        {
            bool check = true;
            for(int x=0; x<32; x++)
            {
                if(v[x]%k!=0)
                {
                    check=false;
                    break;
                }
            }
            if(check)
            {
                ans.push_back(k);
            }
        }

        for(int val: ans)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }

    
    
    return 0;
}