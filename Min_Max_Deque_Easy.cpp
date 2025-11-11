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
        int n, q;
        cin>>n>>q;
        deque<int>dq;
        vector<int>arr;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            arr.push_back(val);
        }
        dq.push_back(arr[0]);
        dq.push_back(arr[1]);
        int p=1;
        for(int i=2; i<n; i++)
        {
            if(p==1)
            {
                if(dq.front()<dq.back())
                {
                    dq.push_front(arr[i]);
                }
                else
                {
                    dq.push_back(arr[i]);
                }
            }
            else
            {
                if(dq.front()<dq.back())
                {
                    dq.push_back(arr[i]);
                }
                else
                {
                    dq.push_front(arr[i]);
                }
            }
            p*=(-1);
        }

        cout<<min(dq.front(), dq.back())<<endl;
    }

    
    
    return 0;
}