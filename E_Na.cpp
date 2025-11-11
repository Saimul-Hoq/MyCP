#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

class Strongest
{
    public:
    int task;
    int place;
};

bool cmp(Strongest l, Strongest r)
{
    if(l.task == r.task)
    {
        return l.place < r.place;
    }
    return l.task > r.task;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    map<int,int>bonus;
    int p = 1;
    for(int i=50; i>=12; i--)
    {
        bonus[i]=p;
        p++;
    }
    bonus[1]=80;
    bonus[2]=68;
    bonus[3]=62;
    bonus[4]=57;
    bonus[5]=53;
    bonus[6]=50;
    bonus[7]=48;
    bonus[8]=46;
    bonus[9]=44;
    bonus[10]=42;
    bonus[11]=40;

    ll r0=0, r1=0, r2=0, r;

    int n;
    cin>>n;
    vector<Strongest>v;
    vector<int>m;
    int l=n;
    while(l--)
    {
        string s;
        int a,b;
        cin>>s>>a>>b;
        Strongest ss;
        ss.task = a;
        ss.place = b;
        v.push_back(ss);
        m.push_back(b);

    }
    sort(v.begin(), v.end(), cmp);
    sort(m.begin(), m.end());
    int k = v[0].task;
    r0+=(10*k);
    int j = min(n, 3);
    for(int i=0; i<j; i++)
    {
        
        int q = m[i];
        if(i==0)
        {
            r0+=bonus[q];
        }
        r0+=bonus[q];
    }
    
    
    cin>>n;
    v.clear();
    m.clear();
    l = n;
    while(l--)
    {
        string s;
        int a,b;
        cin>>s>>a>>b;
        Strongest ss;
        ss.task = a;
        ss.place = b;
        v.push_back(ss);
        m.push_back(b);

    }
    sort(v.begin(), v.end(), cmp);
    sort(m.begin(), m.end());
    k = v[0].task;
    r1+=(10*k);
    j = min(n, 3);
    for(int i=0; i<j; i++)
    {
        int q = m[i];
        if(i==0)
        {
            r1+=bonus[q];
        }
        r1+=bonus[q];
    }
    

    cin>>n;
    v.clear();
    m.clear();
    l = n;
    while(l--)
    {
        string s;
        int a,b;
        cin>>s>>a>>b;
        Strongest ss;
        ss.task = a;
        ss.place = b;
        v.push_back(ss);
        m.push_back(b);

    }
    sort(v.begin(), v.end(), cmp);
    sort(m.begin(), m.end());
    k = v[0].task;
    r2+=(10*k);
    j = min(n, 3);
    for(int i=0; i<j; i++)
    {
        int q = m[i];
        if(i==0)
        {
            r2+=bonus[q];
        }
        r2+=bonus[q];
    }

    
    r = 4*r0 + 3*r1 + 2*r2;

    cout<<r<<endl;
    
    
    return 0;
}