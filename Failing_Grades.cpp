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
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int sum=0;
        double avg;
        bool check=true;
        for(int i=0; i<n; i++)
        {
            sum+=arr[i];
            avg = sum/(i+1);
            if(avg<40)
            {
                check=false;
                break;
            }
        }
        if(check)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    
    
    return 0;
}