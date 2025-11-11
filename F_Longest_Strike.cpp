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
        int n,k;
        cin>>n>>k;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            mp[val]++;
        }
        vector<int>value;
        vector<int>freq;
        for(auto [val, frq]: mp)
        {
            value.push_back(val);
            freq.push_back(frq);
        }
        int l=-1, r=-1;
        int i=0, j=0, mx=INT_MIN;
        bool check=false;
        int sz = value.size();
        while(j<sz)
        {
            if(freq[j]>=k && (i==j || value[j]-value[j-1]==1))
            {
                if(j==sz-1 && (j-i)>mx)
                {
                    l=value[i];
                    r=value[j];
                }
                j++;
                check=true;

            }
            else
            {
                if(check && (j-i-1)>mx)
                {
                    l=value[i];
                    r=value[j-1];
                    mx=j-i-1;
                }
                
                if(i==j)
                {
                    j++;
                    i++;
                }
                else
                {
                    i=j;
                }
                check=false;
            }
        }

        if(l==-1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<l<<" "<<r<<endl;
        }
    }

    
    
    return 0;
}