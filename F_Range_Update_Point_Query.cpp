#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int digitSum(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum += n%10;
        n/=10;
    }

    return sum;
}

void saim()
{
    int n,q;
    cin>>n>>q;
    int arr[n+1];
    set<int>s;
    for(int i=1; i<=n; i++) 
    {
        cin>>arr[i];
        if(arr[i]>9) s.insert(i);
    }
    while(q--)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            int l,r;
            cin>>l>>r;
            auto it = s.lower_bound(l);
            vector<int>ers;
            while(1)
            {
                
                if(it==s.end() || *it>r) break;
                else
                {
                    arr[*it] = digitSum(arr[*it]);
                    if(arr[*it]<=9) ers.push_back(*it);
                }
                it++;
            }
            for(int val: ers)
            {
                s.erase(val);
            }
        }
        else
        {
            int x;
            cin>>x;
            cout<<arr[x]<<endl;
        }
    }
    

}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int t;
    cin>>t;
    while(t--)
    {
        saim();
    }
    
    
    
    return 0;
}