#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>>s;
    int n = s.size();
    vector<int>arr(27, 0);
    for(int i=0; i<n; i++)
    {
        int p = s[i] - 'A' + 1;
        arr[p]++;
    }
    int odd=0, onum = -1;
    for(int i=1; i<27; i++)
    {
        if(arr[i]%2==1)
        {
            odd++;
            onum = i;
        }
    }
    if(odd>1)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else
    {
        for(int i=1; i<27; i++)
        {
            int p = arr[i]/2;
            char ch = 'A' + i - 1;
            while(p--)
            {
                cout<<ch;
            }
        }
        if(onum!=-1)
        {
            char ch = 'A' + onum - 1;
            cout<<ch;
        }
        for(int i=26; i>0; i--)
        {
            int p = arr[i]/2;
            char ch = 'A' + i - 1;
            while(p--)
            {
                cout<<ch;
            }
        }
        cout<<endl;

    }
    

    
    
    return 0;
}