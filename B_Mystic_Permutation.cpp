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
        int n;
        cin>>n;
        vector<int>arr(n+1);
        set<int>s;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            s.insert(arr[i]);
        }
        if(n==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            vector<int>ans(n+1);
            int val=1;
            while(!s.empty())
            {
                int indx = *s.begin();
                if(s.size()==1 && arr[indx]==val)
                {
                    ans[indx]=val;
                    swap(ans[indx], ans[indx-1]);
                    break;
                }
                else if(arr[indx]==val)
                {
                    indx++;
                }
                ans[indx]=val;
                s.erase(indx);
                val++;
            }

            for(int i=1; i<=n; i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }

    }

    
    
    return 0;
}