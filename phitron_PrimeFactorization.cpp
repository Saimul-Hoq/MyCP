//Using SPF(Smallest Prime Factor)
//T.C = O(root(n))

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    vector<int>factors;
    int i=2;
    while(i*i<=n)
    {
        if(n%i==0)
        {
            factors.push_back(i);
            n/=i;
        }
        else
        {
            i++;
        }
    }
    if(n!=1)
    {
        factors.push_back(n);
    }
    for(int val: factors)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    
    
    return 0;
}

























// //Using Sieve  
// // T.C = O( nlog(log(n)))

// #include<bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// typedef long long ll;

// vector<int>primes;

// void sieve(int n)
// {
//     vector<bool>isPrime(n+1, true);
//     for(int i=2; i*i<=n; i++)
//     {
//         if(isPrime[i])
//         {
//             for(int j=i*i; j<=n; j+=i)
//             {
//                 isPrime[j] = false;
//             }
//         }
//     }

//     for(int i=2; i<=n; i++)
//     {
//         if(isPrime[i])
//         {
//             primes.push_back(i);
//         }
//     }
// }


// int main()
// {
    
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int n;
//     cin>>n;
//     sieve(n);
//     vector<int>factors;
//     int i = 0;
//     while(n>1)
//     {
//         int val = primes[i];
//         if(n%val==0)
//         {
//             n=n/val;
//             factors.push_back(val);
//         }
//         else
//         {
//             i++;
//         }
        
//     }
//     for(int val: factors)
//     {
//         cout<<val<<" ";
//     }
//     cout<<endl;

    
    
//     return 0;
// }

