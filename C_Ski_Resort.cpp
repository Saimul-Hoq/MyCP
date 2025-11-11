#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,q;
        cin>>n>>k>>q;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        vector<int>v;
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]<=q)
            {
                count++;
            }
            else
            {
                if(count!=0)
                {
                    v.push_back(count);
                    count=0;
                }
            }
        }
        if(count!=0)
        {
            v.push_back(count);
        }
        long long sum = 0;
        while(!v.empty())
        {
            long long p = v.back();
            v.pop_back();
            if(p>=k)
            {
                p = (p-k)+1;
                p = (p*(p+1))/2;
                sum+=p;

            }
           
        }
        cout<<sum<<endl;
    }
    
    
    return 0;
}