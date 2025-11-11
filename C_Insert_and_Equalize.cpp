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
        vector<int>arr(n);
        multiset<int>ms;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            ms.insert(arr[i]);
        }
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        int mx = *max_element(arr.begin(), arr.end());
        vector<int>a;
        for(int i=0; i<n; i++)
        {
            if(arr[i]!=mx)
            {
                a.push_back(mx-arr[i]);
            }
        }
        int gcd=a[0];
        for(int i=1; i<a.size(); i++)
        {
            gcd = __gcd(gcd, a[i]);
        }
        ll op=0;
        for(int i=0; i<a.size(); i++)
        {
            op+=(a[i]/gcd);
        }
        bool check=false;
        int f=mx-gcd;
        for(int i=1; i<=(n-1); i++)
        {
            auto it = ms.find(f);
            if(it == ms.end())
            {
                op+=((mx-f)/gcd);
                check=true;
                break;
            }
            f-=gcd;
        }

        if(check)
        {
            cout<<op<<endl;
        }
        else
        {
            cout<<op+n<<endl;
        }
        
    }

    
    
    return 0;
}