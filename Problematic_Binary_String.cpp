#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

char flip(char ch)
{
    if(ch=='1') return '0';
    return '1';
}

int saim(int n, string &s, int k)
{
   
    if(n==1) return s[0] == '1';


    string v(n,'1');
    for(int i=0; i<n; i+=2)
    {
        v[i] = '0';
    }
    
    int count=0;
    
    
    if(k==1)
    {
        s[0] = flip(s[0]);
        s[1] = flip(s[1]);
        count++;
    }

    
    for(int i=1; i<n; i++)
    {
        if(s[i-1]!=v[i-1])
        {
            s[i-1] = flip(s[i-1]);
            s[i] = flip(s[i]);
            if(i+1<n) s[i+1] = flip(s[i+1]);
            count++;
        }
    }

    if(s==v) return count;
    else return -1;
}

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
        string s;
        cin>>s;

        string str = s;
        
        int a = saim(n, str, 0);
        int b = saim(n, s, 1);
        if(a==-1 && b==-1) cout<<-1<<endl;
        else if(a!=-1 && b!=-1) cout<<min(a,b)<<endl;
        else
        {
            if(a!=-1) cout<<a<<endl;
            else cout<<b<<endl;
        }
    }

    
    
    return 0;
}