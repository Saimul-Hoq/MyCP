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
    
        int count0=0, count1=0;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            if(val==0)
            {
                count0++;
            }
            else
            {
                count1++;
            }

        }
        cout<<min(count0, count1)<<endl;

    }
    
    
    return 0;
}