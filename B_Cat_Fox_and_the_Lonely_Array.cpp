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
        int r = 0;
        int msb=-1;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            r = (r|arr[i]);
            msb = max(msb, __lg(arr[i]));
        }
        vector<int>freq(msb+1, 0);
        vector<int>mx(msb+1, 0);
        for(int i=0; i<n; i++)
        {
            for(int k=0; k<=msb; k++)
            {
                if((((arr[i]>>k)&1)==0))
                {
                    freq[k]++;
                    mx[k] = max(mx[k], freq[k]);
                }
                else
                {
                    freq[k]=0;
                }
            }
        }
        
        int ans = 1;
        int m=0;
        for(int k=0; k<=msb; k++)
        {
            if(((r>>k)&1)==1)
            {
                m = max(m, mx[k]);
            }
        }

        ans+=m;
        cout<<ans<<endl;
    }


    
    
    return 0;
}   