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
        int n,q;
        cin>>n>>q;
        vector<int>arr(n+1);
        multiset<int>a;
        multiset<int, greater<>>b;
        for(int i=1; i<n; i++)
        {
            int val;
            cin>>val;
            arr[i] = val;
            if(i%2==1)
            {
                a.insert(val);
            }
            else
            {
                b.insert(val);
            }
        }
        int c;
        cin>>c;
        cout<<min(c, max(*a.begin(), *b.begin()))<<" ";
        while(q--)
        {
            int x,y;
            cin>>x>>y;
            if(x==n)
            {
                c = y;
                arr[n] = y;
            }
            else if(x%2==1)
            {
                a.erase(a.find(arr[x]));
                a.insert(y);
                arr[x] = y;
            }
            else
            {
                b.erase(b.find(arr[x]));
                b.insert(y);
                arr[x] = y;
            }
            cout<<min(c, max(*a.begin(), *b.begin()))<<" ";
        }
        cout<<endl;
    }

    
    
    return 0;
}