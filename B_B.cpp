#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int gcd(int a, int b)
{
    if(b>a)
    {
        swap(a, b);
    }
    while(a%b!=0)
    {
        int temp = a;
        a=b;
        b = temp%b;
    }

    return b;

}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;

    
    
    return 0;
}