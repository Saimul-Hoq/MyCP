#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


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

void saim()
{
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
    vector<pair<int,int>>ans;
    map<int,pair<int,int>>ma, mb;
    ordered_set<int>sa, sb;
    for(int i=1; i<=n; i++)
    {
        if(a[i]>b[i]) 
        {
            int temp = a[i];
            a[i] = b[i];
            b[i] = temp;
            ans.push_back({3, i});
            
        }
        int p = sa.size() - sa.order_of_key(a[i]);
        ma[a[i]] = {i, p};
        sa.insert(a[i]);

        p = sb.size() - sb.order_of_key(b[i]);
        mb[b[i]] = {i, p};
        sb.insert(b[i]);
        
    }

    
    
    for(auto [val, p]: ma)
    {
        int indx = p.first;
        int lrg = p.second;
        if(lrg>0)
        {
            int i = indx-1;
            for(int k=1; k<=lrg; k++)
            {
                ma[a[i]].first++;
                a[i+1] = a[i];
                ans.push_back({1, i});
                i--;
            }
            
        }
    }

   
    for(auto [val, p]: mb)
    {
        int indx = p.first;
        int lrg = p.second;
        if(lrg>0)
        {
            int i = indx-1;
            for(int k=1; k<=lrg; k++)
            {
                mb[b[i]].first++;
                b[i+1] = b[i];
                ans.push_back({2, i});
                i--;
            }
            
        }
    }
    
    cout<<ans.size()<<endl;
    for(auto [a, b]: ans)
    {
        cout<<a<<" "<<b<<endl;
    }
   
   
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        saim();
    }

    
    
    return 0;
}