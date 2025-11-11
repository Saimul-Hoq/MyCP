#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int arr[n+1];
        arr[0]=0;
        for(int i=0; i<n; i++)
        {
            int p = s[i]-'0';
            arr[i+1] = arr[i] + p;
        }
        ll sum=0;
        for(int i=1; i<=n; i++)
        {
            int k = arr[i] - arr[i-1];
            sum+=k;
            if(i!=n)
            {
                k = arr[i+1] - arr[i-1];
                sum+=k;
            }
        }
        cout<<sum<<endl;
        
        
        

    }

    
    
    return 0;
}