#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n, p, key, i=0, k=0, j=0;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n], carr[n], index[n];
    cout<<"Enter the elements: ";
    while(i<n)
    {
        cin>>arr[i];
        i++;
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
    cout<<"Enter the key element: ";
    cin>>key;

    int s=0, e=(n-1), mid=(s+e)/2, cnt=0;
    p=0;
    while(s<=e)
    {
        if(carr[mid]==key)
        {
            while(p<n)
            {
                if(carr[mid]==index[p])
                {
                    cout<<"Index is: "<<p<<endl;
                    cnt++;
                    break;
                }
                else
                {
                    p++;
                }
            }
            break;
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