#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m,k;
    cin>>n>>m>>k;
    int arr[m];
    int key;
    for(int i=0; i<m; i++)
    {
        cin>>arr[i];
    }
    cin>>key;

    int friends=0;
    for(int val: arr)
    {
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(((key>>i)&1) != ((val>>i)&1))
            {
                count++;
            }
        }
        if(count<=k)
        {
            friends++;
        }
    }

    cout<<friends<<endl;

    
    
    return 0;
}