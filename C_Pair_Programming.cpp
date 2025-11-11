#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int k,n,m;
        cin>>k>>n>>m;
        int a[n], b[m], c[n+m];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<m;  i++)
        {
            cin>>b[i];
        }
        int i=0, j=0, p=0;
        while(i<n && j<m)
        {
            if(a[i]<b[j])
            {
                c[p] = a[i];
                i++;
                p++;
            }
            else
            {
                c[p] = b[j];
                j++;
                p++;
            }
        }
        while(i<n)
        {
            c[p] = a[i];
            i++;
            p++;
        }
        while(j<m)
        {
            c[p] = b[j];
            j++;
            p++;
        }
        bool check = true;
        for(int i=0; i<(n+m); i++)
        {
            if(c[i]==0)
            {
                k++;
            }
            else
            {
                if(k<c[i])
                {
                    check = false;
                    break;
                }
            }
        }
        if(check)
        {
            for(int val: c)
            {
                cout<<val<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }

    
    
    return 0;
}