#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        multiset<int>arr;
        int sum=0, avg=0;
        for(int i=0; i<5; i++)
        {
            int val;
            cin>>val;
            arr.insert(val);
            sum+=val;
        }
        avg = sum/5;
        int cost = 0;
        if(avg>=7)
        {
            cout<<0<<endl;
        }
        else
        {
            for(int val: arr)
            {
                sum = sum - val + 10;
                avg = sum/5;
                cost+=100;
                if(avg>=7)
                {
                    break;
                }
            }
            cout<<cost<<endl;
        }
    }
    
    
    return 0;
}