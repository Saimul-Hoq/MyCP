#include<iostream>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int arr[4], suncount=0, slavcount=0, wincount=0;
        for(int i=0; i<4; i++)
        {
            cin>>arr[i];
        }

        for(int i=0, j=2; i<2; i++, j++)
        {
            if(arr[i]>arr[j])
            {
                suncount++;
            }
            else if(arr[i]<arr[j])
            {
                slavcount++;
            }
        }
        if(suncount>slavcount)
        {
            wincount++;
        }

        suncount=0;
        slavcount=0;

        for(int i=0, j=3; i<2; i++, j--)
        {
            if(arr[i]>arr[j])
            {
                suncount++;
            }
            else if(arr[i]<arr[j])
            {
                slavcount++;
            }
        }
        if(suncount>slavcount)
        {
            wincount++;
        }
        suncount=0;
        slavcount=0;

        for(int i=1, j=2; i>=0; i--, j++)
        {
            if(arr[i]>arr[j])
            {
                suncount++;
            }
            else if(arr[i]<arr[j])
            {
                slavcount++;
            }
        }
        if(suncount>slavcount)
        {
            wincount++;
        }
        suncount=0;
        slavcount=0;

        for(int i=1, j=3; i>=0; i--, j--)
        {
            if(arr[i]>arr[j])
            {
                suncount++;
            }
            else if(arr[i]<arr[j])
            {
                slavcount++;
            }
        }
        if(suncount>slavcount)
        {
            wincount++;
        }
        suncount=0;
        slavcount=0;

        cout<<wincount<<endl;;
    }

    return 0;
}