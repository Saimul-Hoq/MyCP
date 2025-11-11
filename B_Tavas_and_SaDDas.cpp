#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string n;
    cin>>n;
    int p = n.size();
    vector<string>arr;
    for(int mask=0; mask<(1<<p); mask++)
    {
        string t="";
        for(int k=p-1; k>=0; k--)
        {
            if(((mask>>k)&1)==0)
            {
                t+="4";
            }
            else
            {
                t+="7";
            }
        }
        arr.push_back(t);
    }
    sort(arr.begin(), arr.end());
    int ans = 0;
    for(int k=1; k<p; k++)
    {
        ans+=(1<<k);
    }
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]!=n)
        {
            ans++;
        }
        else
        {
            ans++;
            break;
        }
    }

    cout<<ans<<endl;


    
    
    return 0;
}