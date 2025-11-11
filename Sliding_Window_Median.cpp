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
    
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    ordered_set<pair<int,int>>s;
    int l=0, r=0, p=(k-1)/2;
    while(r<n)
    {
        s.insert({arr[r],r});

        if((r-l+1)==k)
        {
            cout<<s.find_by_order(p)->first<<" ";
            s.erase({arr[l], l});
            l++;
        }
        r++;
    }
    cout<<endl;
    

    
    
    return 0;
}


























// #include<bits/stdc++.h>
// using namespace std;
// #define endl "\n"

// int main()
// {
    
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int n,k;
//     cin>>n>>k;
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }

//     if(n==1)
//     {
//         cout<<arr[0]<<endl;
//     }
//     else if(k==1)
//     {
//         for(int i=0; i<n; i++)
//         {
//             cout<<arr[i]<<" ";
//         }
//     }
//     else
//     {
//         multiset<int, greater<int>>smaller_ms;
//         multiset<int>larger_ms;
//         smaller_ms.insert(arr[0]);
//         int l=0, r=1;
//         while(r<n)
//         {
//             int val = arr[r];
//             //Inserting
//             if(val>*smaller_ms.begin())
//             {
//                 larger_ms.insert(val);
//             }
//             else
//             {
//                 smaller_ms.insert(val);
//             }

//             //Balancing
//             if(smaller_ms.size()>((k+1)/2))
//             {
//                 larger_ms.insert(*smaller_ms.begin());
//                 smaller_ms.erase(smaller_ms.begin());
//             }
//             else if(larger_ms.size()>(k/2))
//             {
//                 smaller_ms.insert(*larger_ms.begin());
//                 larger_ms.erase(larger_ms.begin());
//             }

//             //Answer and removing
//             if(r-l+1==k)
//             {
//                 cout<<*smaller_ms.begin()<<" ";
//                 if(smaller_ms.find(arr[l])!=smaller_ms.end())
//                 {
//                     smaller_ms.erase(smaller_ms.find(arr[l]));
//                 }
//                 else
//                 {
//                     larger_ms.erase(larger_ms.find(arr[l]));
//                 }

//                 l++;
//             }

//             r++;
//         }

//     }
    

    
    
//     return 0;
// }