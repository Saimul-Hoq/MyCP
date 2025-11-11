#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v(1001,0);

    int n;
    cin>>n;
    int num;
    for(int i=0; i<n; i++)
    {
        cin>>num;
        v[num]++;

    }
    int count=0;
    for(int i=0,j=1; j<1001; i++,j++)
    {
        if(v[j]!=0)
        {
            count+=v[i];
        }
    }

    cout<<count<<endl;

    return 0;

}

