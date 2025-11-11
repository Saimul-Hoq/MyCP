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
    
    int n;
    cin>>n;
    vector<int>a(n+1), b(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        cin>>b[i];
    }
    vector<int>arr(n+1);
    for(int i=1; i<=n; i++)
    {
        arr[i] = a[i]-b[i];
    }
    ordered_set<int>pos, neg;
    ll ans=0;
    for(int i=n; i>=1; i--)
    {
        if(arr[i]==0)
        {
            int p = pos.size() - pos.order_of_key(1);
            ans+=p;
            pos.insert(arr[i]);
        }
        else if(arr[i]>0)
        {
            ans+=pos.size();
            int p = neg.order_of_key(arr[i]);
            ans+=p;
            pos.insert(arr[i]);
        }
        else
        {
            arr[i]*=(-1);
            int p = pos.size() - pos.order_of_key(arr[i]+1);
            ans+=p;
            neg.insert(arr[i]);
        }


    }

    cout<<ans<<endl;

    
    
    return 0;
}

//saimul h//hekkohsskjfslkfjskcjsfjskfjsl;