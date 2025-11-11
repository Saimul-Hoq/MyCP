#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    if(n==k)
    {
        string str(n, '-');
        cout<<str<<endl;
        return;
    }

    int z=0, o=0, t=0;
    for(int i=0; i<k; i++)
    {
        if(s[i]=='0') z++;
        else if(s[i]=='1') o++;
        else t++;
    }

    string a(n, '+');
    int i=0, j=n-1;
    for(; i<z; i++)
    {
        a[i]='-';
    }
    for(int p=1; p<=o; p++)
    {
        a[j] = '-';
        j--;
    }

    while(i<=j && t!=0)
    {
        a[i] = '?';
        a[j] = '?';
        i++;
        j--;
        t--;
    }

    cout<<a<<endl;

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