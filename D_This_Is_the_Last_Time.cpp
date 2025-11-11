#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

class Casino
{
    public:
    int l;
    int r;
    int real;
};

bool cmp(Casino left, Casino right)
{
    return left.l < right.l;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<Casino>v;
        for(int i=0; i<n; i++)
        {
            int l,r,real;
            cin>>l>>r>>real;
            Casino c;
            c.l = l;
            c.r = r;
            c.real = real;
            v.push_back(c);
        }

        sort(v.begin(), v.end(), cmp);
        for(int i=0; i<n; i++)
        {
            int l = v[i].l;
            int r = v[i].r;
            int real = v[i].real;
            if(k>=l)
            {
                if(k<=r && k<real)
                {
                    k = real;
                }
            }
            else
            {
                break;
            }
        }

        cout<<k<<endl;

    }

    
    
    return 0;
}