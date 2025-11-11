#include<iostream>
using namespace std;
int main()
{
    int i=0, n, key, cnt=0;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    while(i<n)
    {
        cin>>arr[i];
        i++;
    }
    cout<<"Enter which key you want to find: ";
    cin>>key;
    i=0;
    while(i<n)
    {
        if(arr[i]==key)
        {
            cout<<"The index is: "<<i<<endl;
            cnt++;
            break;
        }
        else
        {
            i++;
        }
    }
    if(cnt==0)
    {
        cout<<"-1"<<endl;
    }
    return 0;
}