#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         


void saim()
{
    int n;
    cin>>n;
    vector<string>v(n);
    int i=0;
    bool check=false;
    for(int a=48; a<=57; a++)
    {
        for(int b=33; b<=47; b++)
        {
            for(int c=65; c<=90; c++)
            {
                for(int d=97; d<=122; d++)
                {
                    char c1 = a, c2=b, c3=c, c4=d;
                    v[i].push_back(c1);
                    v[i].push_back(c2);
                    v[i].push_back(c3);
                    v[i].push_back(c4);
                    i++;
                    if(i==n)
                    {
                        check=true;
                        break;
                    }

                }
                if(check) break;
            }
            if(check) break;
        }
        if(check) break;
    }

    i=0;
    check = false;
    for(int a=58; a<=64; a++)
    {
        for(int b=33; b<=47; b++)
        {
            for(int c=65; c<=90; c++)
            {
                for(int d=97; d<=122; d++)
                {
                    char c1 = a, c2=b, c3=c, c4=d;
                    v[i].push_back(c1);
                    v[i].push_back(c2);
                    v[i].push_back(c3);
                    v[i].push_back(c4);
                    i++;
                    if(i==n)
                    {
                        check=true;
                        break;
                    }

                }
                if(check) break;
            }
            if(check) break;
        }
        if(check) break;
    }

    for(string s: v)
    {
        cout<<s<<endl;
    }
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    saim();

    
    
    return 0;
}