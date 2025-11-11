#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int arr[n];
    cout<<"Enmter the elements.";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Permuted values: "<<endl;;
    for(int i=0; i<n; i++)
    {
       
        for(int j=0; j<n; j++)
        {
            if(j!=i)
            {
                for(int k=0; k<n; k++)
                {
                    if(k!=i && k!=j)
                    {
                        cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                    }
                }
            } 
        }
    }

}
