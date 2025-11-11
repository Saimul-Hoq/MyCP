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
        int n,k;
        cin>>n>>k;
        vector<int>price(n), dis(k);
        for(int i=0; i<n; i++)
        {
            cin>>price[i];
        }
        for(int i=0; i<k; i++)
        {
            cin>>dis[i];
        }
        sort(price.begin(), price.end());
        sort(dis.rbegin(), dis.rend());

        ll cost=0;
        while(!price.empty() && !dis.empty())
        {
            int d = dis.back();
            dis.pop_back();

            if(price.size()>=d)
            {
                d--;
                while(d--)
                {
                    cost+=price.back();
                    price.pop_back();
                }
                price.pop_back();
            }
            else
            {
                while(!price.empty())
                {
                    cost+=price.back();
                    price.pop_back();
                }
            }

        }
        while(!price.empty())
        {
            cost+=price.back();
            price.pop_back();
        }

        cout<<cost<<endl;
    }

    
    
    return 0;
}