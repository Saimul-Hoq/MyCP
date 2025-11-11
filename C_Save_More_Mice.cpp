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
        int n,k;
        cin>>n>>k;
        vector<int>arr;
        for(int i=0; i<k; i++)
        {
            int val;
            cin>>val;
            arr.push_back(val);
        }

        sort(arr.begin(), arr.end());
        int count=0, cat=0;
        for(int i=k-1; i>=0; i--)
        {
            if(arr[i]>cat)
            {
                count++;
                cat+=(n-arr[i]);
            }
            else
            {
                break;
            }
        }
        cout<<count<<endl;
    }

    
    
    return 0;
}