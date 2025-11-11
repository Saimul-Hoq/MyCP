#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int x1,y1, x2,y2, x3, y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        bool flag = false;
        if(x2==x3 && (y2+y3)==y1 && (x1+x2)==y1) flag = true;
        else if(y1==y2 && y1==y3 && (x1+x2+x3)==y1) flag = true;
        else if((x2+x3)==x1 && y2==y3 && (y1+y2)==x1) flag = true;
        else if(x1==x2 && x1==x3 && (y1+y2+y3)==x1) flag = true;

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    
    
    return 0;
}