#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n;
    cin>>n;

    int count=0;
    for(int k=__lg(n); k>=0; k--)
    {
        if(((n>>k)&1)==1) count++;
    }
    if(count%2==1)
    {
        cout<<"NO"<<endl;
        return;
    }


    int j=0;
    for(int k=0; k<=__lg(n); k++)
    {
        if(((n>>k)&1)==1)
        {
            j=k;
            break;
        }
    }
    vector<int>v;
    for(int k=__lg(n); k>=j; k--)
    {
        v.push_back(((n>>k)&1));
    }

    vector<int>t(v);
    reverse(t.begin(), t.end());
    bool check=true;
    for(int i=0; i<v.size(); i++)
    {
        if(t[i]!=v[i])
        {
            check=false;
            break;
        }
    }
    if(check) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    
    
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




