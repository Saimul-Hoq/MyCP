#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int n,d;
pair<int,char> arr[100005];
int dp[100005];

int solve(int i)
{
    if(i>=n)
    {
        set<int>v;
        for(int j=0; j<n; j++)
        {
            if(arr[j].second != 'l') v.insert(arr[j].first);
            else
            {
                for(int k=1; k<d; k++)
                {
                    j++;
                }
            }
        }
       
        //int ans=-1;
        int k=0;
        for(int val: v)
        {
            if(val!=k)
            {
                //ans=k;
                break;
            }
            k++;
        }
        
        return k;
    }

    if(dp[i]!=-1) return dp[i];

    arr[i].second = 'l';
    int val1 = solve(i+d+d);
    arr[i].second = 'n';

    int val2 = solve(i+1);
    
    dp[i] = min(val1, val2);
    
    return dp[i];
    

}

void saim()
{
    cin>>n>>d;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        arr[i] = {val,'n'};
        
    }
    memset(dp, -1, sizeof(dp));

    cout<<solve(0)<<endl;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    saim();
    
    
    return 0;
}