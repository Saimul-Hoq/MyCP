#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        for(int i=n; i>=0; i--)
        {
            if(i == 0)
            {
                printf("1\n");
            }
            else if(i == 1)
            {
                printf("2 + ");
            }
            else
            {
                printf("2^%d + ", i);
            }
        }
        
    }

    return 0;
}