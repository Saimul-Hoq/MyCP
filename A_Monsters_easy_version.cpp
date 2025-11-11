#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        multiset<int>s;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            s.insert(val);
        }
        long long count=0, p=1;
        for(long long i: s)
        {
            if(i>p)
            {
                count+=(i-p);
                p++;
            }
            else if(i==p)
            {
                p++;
            }
            
        }
        cout<<count<<endl;

    }

    return 0;
}