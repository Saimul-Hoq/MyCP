#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        multiset<int>s;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            s.insert(val+i+1);
        }
        long long sum=0, count=0;
        for(int val: s)
        {
            sum+=(long long)val;
            if(sum<=c)
            {
                count++;
            }
            else
            {
                break;
            }
        }

        cout<<count<<endl;
    }
    
    
    return 0;
}