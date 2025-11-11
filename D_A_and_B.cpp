#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

ll slides(int n, string &s, int asz, vector<int>&a, int mid, char ch)
{
    ll ans_a=0;
    int count=0;
    for(int i=mid+1; i<n; i++)
    {
        if(s[i]!=ch)
        {
            count++;
        }
        else
        {
            ans_a+=count;
            
        }
    }

    count=0;
    for(int i=mid-1; i>=0; i--)
    {
        if(s[i]!=ch)
        {
            count++;
        }
        else
        {
            ans_a+=count;
        }
    }

    return ans_a;
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
        vector<int>a;
        vector<int>b;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='a')
            {
                a.push_back(i);
            }
            else
            {
                b.push_back(i);
            }
        }
        ll ans_a=0, ans_b=0;
        bool at=false, bt=false;

        int asz = a.size();
        if(asz>0)
        {
            at = true;
            if(asz%2==1)
            {
                int mid = (asz-1)/2;
                mid = a[mid];
                ans_a = slides(n, s, asz, a, mid, 'a');
            }   
            else
            {
                int md = (asz-1)/2;
                int mid = a[md];
                ll p = slides(n, s, asz, a, mid, 'a');
                mid = a[md+1];
                ll q = slides(n, s, asz, a, mid, 'a');
                ans_a = min(p,q);
               
            
            }
        }
        



        //for b
        int bsz = b.size();
        if(bsz>0)
        {
            bt = true;
            if(b.size()%2==1)
            {
                int mid = (bsz-1)/2;
                mid = b[mid];
                ans_b = slides(n, s, bsz, b, mid, 'b');
            }   
            else
            {
                int md = (bsz-1)/2;
                int mid = b[md];
                
                ll p = slides(n, s, bsz, b, mid, 'b');
                mid = b[md+1];
               
                ll q = slides(n, s, bsz, b, mid, 'b');
                ans_b = min(p,q);
                
            }
        }
       

        if(at && bt)
        {
            cout<<min(ans_a, ans_b)<<endl;
        }
        else
        {
            if(at)
            {
                cout<<ans_a<<endl;
            }
            else
            {
                cout<<ans_b<<endl;
            }
        }
    }

    
    
    return 0;
}