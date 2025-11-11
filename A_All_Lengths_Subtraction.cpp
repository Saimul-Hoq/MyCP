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
        vector<int>arr(n+2, 0);
        int l,r;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            if(arr[i]==n)
            {
                l=i;
                r=i;
            }
        }
        int k=n-1, sz=1;
        bool check=true;
        while(k>=1)
        {
            if(arr[l-1]==k)
            {
                l--;
            }
            else if(arr[r+1]==k)
            {
                r++;
            }
            if((r-l+1)==sz)
            {
                check=false;
                break;
            }
            k--;
            sz++;
        }

        if(n==1 || check)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }




    
    
    return 0;
}