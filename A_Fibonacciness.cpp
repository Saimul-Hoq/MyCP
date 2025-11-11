#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[5];

        cin>>arr[0];
        cin>>arr[1];
        cin>>arr[3];
        cin>>arr[4];

        int count1=0, count2=0;

        arr[2]=arr[0]+arr[1];
        count1++;
        if(arr[1]+arr[2]==arr[3])
        {
            count1++;
        }
        if(arr[2]+arr[3]==arr[4])
        {
            count1++;
        }

        arr[2]=arr[3]-arr[1];
        if(arr[0]+arr[1]==arr[2])
        {
            count2++;
        }
        if(arr[1]+arr[2]==arr[3])
        {
            count2++;
        }
        if(arr[2]+arr[3]==arr[4])
        {
            count2++;
        }

        cout<<max(count1, count2)<<endl;
    }
    
    
    return 0;
}