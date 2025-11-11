#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

vector<string>arr;
ll dp[1005][1005];

ll solve(int l, int r)
{
    if(l>r) return 0;
    if(l==r) return stoi(arr[l]);

    if(dp[l][r]!=LLONG_MIN) return dp[l][r];

    ll ans=0;
    for(int i=l; i<=r; i++)
    {
        if(arr[i]=="+" || arr[i]=="-" || arr[i]=="*" || arr[i]=="/")
        {
            ll val1 = solve(l, i-1);
            ll val2 = solve(i+1, r);

            ll val;
            if(arr[i]=="+") val = val1 + val2;
            else if(arr[i]=="-") val = val1 - val2;
            else if(arr[i]=="*") val = val1 * val2;
            else val = val1/val2;

            ans = max(ans, val);
        }
    }

    return dp[l][r] = ans;
    
}

void saim()
{
    string s;
    cin>>s;
    string str="";
    for(int i=0; i<s.size(); i++)
    {
        
       
        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
        {
            arr.push_back(str);
            str.clear();
            string temp="";
            temp.push_back(s[i]);
            arr.push_back(temp);
        }
        else
        {
            str.push_back(s[i]);
        }

        if(i==s.size()-1)
        {
            arr.push_back(str);
        }
    }

    for(int i=0; i<1005; i++)
    {
        for(int j=0; j<1005; j++)
        {
            dp[i][j] = LLONG_MIN;
        }
    }

    cout<<solve(0, arr.size()-1)<<endl;

}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    saim();
    
    
    return 0;
}