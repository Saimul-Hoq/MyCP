#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    bool check=true;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='B')
        {
            check=false;
            break;
        }
    }
    while(q--)
    {
        int val;
        cin>>val;
        int ans=0;
        if(check)
        {
            cout<<val<<endl;
            continue;
        }

        while(val!=0)
        {
            for(int i=0; i<n && val>0; i++)
            {
                if(s[i]=='A') val--;
                else val/=2;
                ans++;
            }
        }

        cout<<ans<<endl;
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


































// #include<bits/stdc++.h>
// using namespace std;       //_________(1 + 0.01)^365 = 38____________||
// #define endl "\n"             
// typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


// void saim()
// {
//     int n,q;
//     cin>>n>>q;
//     string s;
//     cin>>s;
//     vector<int>arr;
//     int cnt=0;
//     for(int i=0, j=0; j<n; j++)
//     {
//         if(s[i]=='B' && s[j]=='B') cnt+=2;
//         else  if(s[i]=='A' && s[j]=='A') cnt--;
//         else
//         {
//             arr.push_back(cnt);
//             cnt=0;
//             i=j;
//             j--;
//         }
//     }
//     arr.push_back(cnt);
//     bool check=false;
//     if(arr.size()==1 && arr[0]<0) check=true; 
//     while(q--)
//     {
//         int val;
//         cin>>val;
//         int ans=0;
//         if(check)
//         {
//             cout<<val<<endl;
//             continue;
//         }
//         while(val!=0)
//         {
//             for(int i=0; i<arr.size() && val>0; i++)
//             {
//                 if(arr[i]>0)
//                 {
//                     int temp = val;
//                     temp/=arr[i];
//                     if(temp>0)
//                     {
//                         val/=arr[i];
//                         ans+=(arr[i]/2);
//                     }
//                     else
//                     {
//                         ans = ans + (val/2) + 1;
//                         val=0;
//                     }
//                 }
//                 else if(arr[i]<0)
//                 {
//                     int temp = val;
//                     temp-=(arr[i]*(-1));
//                     if(temp>0)
//                     {
//                         val-=(arr[i]*(-1));
//                         ans+=(arr[i]*(-1));
//                     }
//                     else
//                     {
//                         ans+=val;
//                         val=0;
//                     }
//                 }
//             }
//         }

//         cout<<ans<<endl;
//     }
// }

// int main()
// {
    
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    

//     int t;
//     cin>>t;
//     while(t--)
//     {
//         saim();
//     }
    
    
//     return 0;
// }