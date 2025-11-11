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
        map<int,int>mp;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            mp[val]++;
            arr[i] = val;
        }
        auto [val, f] = *mp.begin();

        if(f==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            bool check=false;
            for(int i=0; i<n; i++)
            {
                if(arr[i]!=val && arr[i]%val!=0)
                {
                    check=true;
                    break;
                }
            }
            if(check)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }



    
    
    return 0;
}