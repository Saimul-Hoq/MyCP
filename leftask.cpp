#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    int arr[r][c];

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix is: "<<endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<arr[i][j]<<" ";
        
        }
        cout<<endl;
    }

    int carr[r*c], k=0;
    
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            carr[k]=arr[i][j];
            k++;
        }
    }
    int i=0, sum=0, mult=1;
    for(int j=0; j<k; j++)
    {
        if(carr[i]<carr[j])
        {
            i=j;
        }
    }
    cout<<"Maximum= "<<carr[i]<<endl;

    for(int j=0; j<k; j++)
    {
        if(carr[i]>carr[j])
        {
            i=j;
        }
    }
    cout<<"Minimum= "<<carr[i]<<endl;

    for(int i=0; i<k; i++)
    {
        sum=sum+carr[i];
        mult=mult*carr[i];
    }
    cout<<"Sum= "<<sum<<endl;
    cout<<"Multiplication= "<<mult<<endl;
    return 0;



    





     

    
}