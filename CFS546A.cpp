#include<iostream>
using namespace std;
#define endl "\n"

int main()
{
    int k, w;
    long long n, sum=0;

    cin>>k>>n>>w;

    for(int i=1; i<=w; i++)
    {
        sum+=(i*k);
    }

    if(sum>n)
    {
        cout<<sum-n<<endl;
    }
    else
    {
        cout<<0<<endl;
    }

    return 0;
}