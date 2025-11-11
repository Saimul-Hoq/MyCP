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
    string s;
    cin>>s;
    map<char,deque<int>>mp;
    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]].push_back(i);
    }
    vector<int>rev(n);
    reverse(s.begin(), s.end());
    for(int i=0; i<n; i++)
    {
        rev[i] = mp[s[i]].front();
        mp[s[i]].pop_front();
    }
    ordered_set<int>os;
    os.insert(rev[0]);
    ll ans=0;
    for(int i=1; i<n; i++)
    {
        int p = os.size() - os.order_of_key(rev[i]);
        ans+=p;
        os.insert(rev[i]);
    }
    cout<<ans<<endl;


    
    
    return 0;
}