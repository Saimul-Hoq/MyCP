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
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        int ans1 = 0, ans2=0;
        int p=1;
        int i;
        for(i=0; arr[i]%2!=0; i++);
        for(int j=i; j<n; j++)
        {
            if(p==1 && arr[j]%2==0)
            {
                ans1++;
                p*=(-1);
            }
            else if(p==-1 && arr[j]%2==1)
            {
                ans1++;
                p*=(-1);

            }
           

        }

        p = -1;
        for(i=0; arr[i]%2!=1; i++);
        for(int j=i; j<n; j++)
        {
            if(p==1 && arr[j]%2==0)
            {
                ans2++;
                p*=(-1);
            }
            else if(p==-1 && arr[j]%2==1)
            {
                ans2++;
                p*=(-1);

            }
           

        }

        cout<<max(ans1, ans2)<<endl;
    }

    
    
    return 0;
}