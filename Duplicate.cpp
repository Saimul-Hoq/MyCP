#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag=0;
    cin>>n;

    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    for(int i=0, j=1; j<n; i++, j++)
    {
        if(v[i]==v[j])
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}