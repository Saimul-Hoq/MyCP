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
        vector<int>arr(32, 0);
        for(int k=0; k<=__lg(n); k++)
        {
            arr[k] = ((n>>k)&1);
        }

        

        for(int i=0; i<32; i++)
        {
            if(arr[i]==1)
            {
                int l = i;
                int r = i;
                while(arr[i]!=0 && i<32)
                {
                    arr[i]=0;
                    i++;
                    r=i;

                }
                i--;
                if(r-l+1>2)
                {
                    arr[l] = -1;
                    arr[r] = 1;
                }
                else
                {
                    arr[l] = 1;
                }
            }
        }

        int sz;
        for(int i=31; i>=0; i--)
        {
            if(arr[i]==1)
            {
                sz=i+1;
                break;
            }
        }

        cout<<sz<<endl;
        for(int i=0; i<sz; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }

    
    
    return 0;
}