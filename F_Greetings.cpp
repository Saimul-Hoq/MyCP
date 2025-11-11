#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//#define ordered_set tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update>
//less<T> => set.
//less_equal<T> => multiset.
// ordered_set<type>ms;
// ms.order_of_key(k) ~~ Number of items strictly smaller than k .
// ms.find_by_order(k); ~~ K-th element in a set (counting from zero).

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
        vector<pair<int,int>>arr(n);
        ordered_set<int>os;
        for(int i=0; i<n; i++)
        {
            int a,b;
            cin>>a>>b;
            arr[i] = {a,b};
            os.insert(b);
        }
        ll ans=0;
        sort(arr.begin(), arr.end());
        for(int i=n-1; i>=0; i--)
        {
            int p = os.size() - os.order_of_key(arr[i].second) - 1;
            ans+=p;
            os.erase(arr[i].second);
        }
        cout<<ans<<endl;

    }
              

    
    
    return 0;
}