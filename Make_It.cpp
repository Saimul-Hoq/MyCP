#include<bits/stdc++.h>
using namespace std;

int n;
int dp[100005];

bool make_it(int i)
{
    if(i==n)
    {
        return true;
    }
    else if(i>n)
    {
        return false;
    }
    if(dp[i] != -1)
    {
        if(dp[i] == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool flag = make_it(i+3) || make_it(i*2);
    if(flag)
    {
        dp[i] = 1;
    }
    else
    {
        dp[i] = 0;
    }
    return flag;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        cin>>n;
        memset(dp, -1, sizeof(dp));

        if(make_it(1))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
    
    return 0;
}