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
        multiset<int>arr;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            arr.insert(val);
        }
        int team = 0, temp = 0;
        multiset<int>ml;
       
        for(int i=1; i<=100; i++)
        {
           
            ml = arr;
            temp = 0;
            for(int a: arr)
            {
                auto ia = ml.find(a);
                if(ia!=ml.end())
                {
                    ml.erase(ia);
                    int b = i-a;
                    auto ib = ml.find(b);
                   
                    if(ib!=ml.end())
                    {
                        temp++;
                        team = max(team, temp);
                        ml.erase(ib);
                    }
                    else
                    {
                        ml.insert(a);
                    }

                }
            }
        }

        cout<<team<<endl;
    }
    
    
    return 0;
}