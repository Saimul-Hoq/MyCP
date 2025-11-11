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
        int n;
        cin>>n;
        char ch='a';
        ch--;
        for(int i=0; i<n; i++)
        {
            ch++;
            cout<<ch;
            if(ch=='e')
            {
                ch='a';
            }

            
        }
        cout<<endl;
    }

    
    
    return 0;
}