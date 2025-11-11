#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n, i=0, j=0, k=0, p;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n], carr[n], index[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    i=0;

    while(k<n)
    {
        while(j<n)
        {
            if(arr[i]>arr[j])
            {
                i=j;
                j++;
            }
            else
            {
                j++;
            }
        }
        carr[k]=arr[i];
        p=i;
        index[p]=carr[k];

        arr[i]=INT_MAX;
        k++;
        i=0;
        j=0;
    }
    

    int s=0, e=(n-1), mid=(s+e)/2, key, cnt=0;
    cout<<"Enter the key element: ";
    cin>>key;
    while(s<=e)
    {
        if(carr[mid]==key)
        {
           p=0;
           while(p<n)
           {
            if(carr[mid]==index[p])
            {
                cout<<"Index is: "<<p<<endl;
                cnt++;
                
            }
            else
            {
                p++;
            }
           }
        }
        else if(carr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }

        mid=(s+e)/2;
    }

    if(cnt==0)
    {
        cout<<"-1"<<endl;
    }

    return 0;


}