#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string str[20];
        int n;
        cin>>n;

        for(int i=0; i<n; i++)
        {
            cin>>str[i];
        }

        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(str[i]>str[j])
                {
                    swap(str[i], str[j]);
                }
            }
        }

        for(int i=0; i<n; i++)
        {
            cout<<str[i]<<endl;
        }
    }

    return 0;
    

}