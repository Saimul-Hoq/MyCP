#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n, a, b, c;
        cin>>n>>a>>b>>c;
        long long sum = a+b+c;
        long long count = n/sum;
        sum = sum*count;
        count*=3;
        

        if(sum<n)
        {
                while(1)
            {
                sum+=a;
                count++;
                if(sum>=n)
                {
                    break;
                }
                sum+=b;
                count++;
                if(sum>=n)
                {
                    break;
                }
                sum+=c;
                count++;
                if(sum>=n)
                {
                    break;
                }
            }
        }

        cout<<count<<endl;
    }
    
    
    return 0;
}