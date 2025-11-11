#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        double h,k,r,x,y;
        cin>>h>>k;
        cin>>r;
        cin>>x>>y;

        double a = pow(x-h, 2) + pow(y-k, 2);
        a = sqrt(a);
        
        if(a<=r)
        {
            cout<<"The point is inside the circle"<<endl;
        }
        else
        {
            cout<<"The point is not inside the circle"<<endl;
        }
    }

    return 0;
}