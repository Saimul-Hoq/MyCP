#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;

        int a, val1, val2;
        if(k%n==0)
        {
            a=k/n;
        }
        else
        {
            a=k/n + 1;
        }
        a = m - a;
        val1 = n*a;
        

        if(k%m==0)
        {
            a=k/m;
        }
        else
        {
            a=k/m+1;
        }
        a = n - a;
        val2 = m*a;
       
        cout<<max(val1, val2)<<endl;
    }
    
    
    return 0;
}