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
    
    int n;
    cin>>n;
    vector<int>arr(n+1);
    ordered_set<int>a;
    ordered_set<int>b;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        a.insert(arr[i]);
    }
    b.insert(arr[n]);
    a.erase(arr[n]);
    ll ans=0;
    for(int i=n-1; i>=1; i--)
    {
        
        
        ll p = b.order_of_key(arr[i]);
        
        ll q = a.size() - a.order_of_key(arr[i])-1;

        ans+=(p*q);

        a.erase(arr[i]);
        b.insert(arr[i]);

    }

    cout<<ans<<endl;

    
    
    return 0;
}