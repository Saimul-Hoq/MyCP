// // // #include<bits/stdc++.h>
// // // using namespace std;

// // // int main()
// // // {
    
// // //     int arr[]={1,2,3,4,5};
// // //     vector<int>v(10,100);
// // //     list<int>l(v.begin(), v.end());
// // //     // for(auto it = l.begin(); it!=l.end(); it++)
// // //     // {
// // //     //     cout<<*it<<endl;
// // //     // }

// // //     for(int val: l)
// // //     {
// // //         cout<<val<<" ";
// // //     }
// // //     cout<<endl;

// // //     l.resize(5);
// // //     for(int val: l)
// // //     {
// // //         cout<<val<<" ";
// // //     }
// // //     cout<<endl;

// // //     l.resize(15, 100);
// // //     for(int val: l)
// // //     {
// // //         cout<<val<<" ";
// // //     }
// // //     cout<<endl;

// // //     cout<<l.size()<<endl;





    
// // //     return 0;
// // // }


// // #include<bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
    
// //     int a[]={10,20,30};
// //     int arr[]={1,2,3,4,5};
// //     vector<int>v(5,5);
// //     list<int>l(a, a+3);
    
// //     for(int val: l)
// //     {
// //         cout<<val<<" ";
// //     }
// //     cout<<endl;

// //     l.push_back(40);
// //     l.push_front(100);

// //     for(int val: l)
// //     {
// //         cout<<val<<" ";
// //     }
// //     cout<<endl;

// //     l.pop_front();
// //     for(int val: l)
// //     {
// //         cout<<val<<" ";
// //     }
// //     cout<<endl;

// //     cout<<*next(l.begin(), 2)<<endl;

// //     l.insert(next(l.begin(), 2), 500);
// //     for(int val: l)
// //     {
// //         cout<<val<<" ";
// //     }
// //     cout<<endl;
// //     l.insert(next(l.begin(), 0), arr, arr+5);
// //     for(int val: l)
// //     {
// //         cout<<val<<" ";
// //     }
// //     cout<<endl;
// //     l.insert(next(l.end(), -1), v.begin(), v.end());
// //     for(int val: l)
// //     {
// //         cout<<val<<" ";
// //     }
// //     cout<<endl;

// //     l.insert(next(l.begin(), 9), 3, 97);
// //     for(int val: l)
// //     {
// //         cout<<val<<" ";
// //     }
// //     cout<<endl;
    
// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
    
//     int arr[]={1,2,3,3,3,3,4,5};
//     list<int>l(arr, arr+8);
//     l.erase(next(l.begin(), 2));
//     for(int val: l)
//     {
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     l.erase(next(l.begin(), 2), next(l.begin(), 4));
//     for(int val: l)
//     {
//         cout<<val<<" ";
//     }
//     cout<<endl;

//     auto it = find(l.begin(), l.end(), 100);
//     if(it==l.end())
//     {
//         cout<<"Not Found"<<endl;
//     }
//     else
//     {
//         cout<<"Found"<<endl;
//     }

//     int a[]={1,2,3,2,4,2,5,2};
//     list<int>l2(a, a+8);
//     replace(l2.begin(), l2.end(), 2, 100);
//     for(int val: l2)
//     {
//         cout<<val<<" ";
//     }
//     cout<<endl;

    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int arr[]={1,3,3,2,5,1,2,4,4,5};
    list<int>l(arr, arr+10);
    for(int val: l)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    l.sort();
    for(int val: l)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    l.sort(greater<int>());
    for(int val: l)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    l.unique();
    for(int val: l)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    l.reverse();
    for(int val: l)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    l.remove(3);
    for(int val: l)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    
    return 0;
}