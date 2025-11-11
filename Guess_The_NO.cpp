// #include<bits/stdc++.h>
// using namespace std;

// long long t;
// map<long long, int>dp;

// bool reach(long long s)
// {
//     if(s==t)
//     {
//         return true;
//     }
//     else if(s>t)
//     {
//         return false;
//     }
//     if(dp[s] != 0)
//     {
//         if(dp[s]==1)
//         {
//             return true;
//         }
//         else if(dp[s]==-1)
//         {
//             return false;
//         }
//     }

//     bool b1 = reach(s+3);
//     bool b2 = reach(s+4);
//     bool check = b1||b2;
//     if(check)
//     {
//         dp[s] = 1;
//     }
//     else
//     {
//         dp[s] = -1;
//     }
//     return b1||b2;
// }

// int main()
// {
//     cin>>t;
    
//     if(reach(0))
//     {
//         cout<<"YES"<<endl;
//     }
//     else
//     {
//         cout<<"NO"<<endl;
//     }
    
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    if(t==1 || t==2 || t==5)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    
    
    return 0;
}