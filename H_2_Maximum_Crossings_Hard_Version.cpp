#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
        vector<int>arr(n+1);
        ll ans=0;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        ordered_set<int>os;
        os.insert(arr[n]);
        for(int i=n-1; i>=1; i--)
        {
            ans+=os.order_of_key(arr[i]+1);
            os.insert(arr[i]);
        }
        cout<<ans<<endl;
    }

    
    
    return 0;
}