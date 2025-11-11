#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int mx = (1<<15);
vector<int>arr;

bool isPalimdrome(int n)
{
    string s = to_string(n);
    string t = s;
    reverse(t.begin(), t.end());

    return s==t;
}

void allPalimdrome()
{
    for(int i=0; i<mx; i++)
    {
        if(isPalimdrome(i))
        {
            arr.push_back(i);
        }
    }
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    allPalimdrome();

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        vector<int>freq(mx, 0);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            freq[v[i]]++;
        }

        long long count=0;
        for(int val: v)
        {
            for(int k: arr)
            {
                count+=(freq[val^k]);
            }
            freq[val]--;
        }
        cout<<count<<endl;
    }

    
    
    return 0;
}