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
        int w,h,a,b;
        cin>>w>>h>>a>>b;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        bool check=false;
        if(abs(x1-x2) !=0 && abs(x1-x2)%a == 0) check=true;
        if(abs(y1-y2)!=0 && abs(y1-y2)%b == 0) check=true;

        if(check) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        
    }
        
        
    

    
    
    return 0;
}