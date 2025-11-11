#include<iostream>
using namespace std;

int main()
{
    int size, cnt=0;
    cout<<"Enter the size of matrix: "<<endl;
    cin>>size;
    int arr[size][size];

    cout<<"Enter the elements: "<<endl;

    for(int r=0; r<size; r++)
    {
        for(int c=0; c<size; c++)
        {
            cin>>arr[r][c];
        }
    }

    cout<<"Diagonal Elements: "<<endl;

    for(int r=0; r<size; r++)
    {
        for(int c=0; c<size; c++)
        {
            if(r==c && (r+c)==size-1)
            {
                for(int i=0; i<c; i++)
                {
                    cout<<"  ";
                }
                cout<<arr[r][c];
            }
            else if(r==c && r<=size/2)  
            {
                for(int i=1; i<=c; i++)
                {
                    cout<<"  ";
                }
                cout<<arr[r][c];
            }
            else if(r==c && r>size/2)
            {
                for(int i=1; i<=c-cnt; i++)
                {
                    cout<<"  ";
                }
                cout<<arr[r][c];
            }
            else if((r+c)==size-1 && c>=r)
            {
               for(int i=1; i<=c-r; i++)
                {
                    cout<<"  ";
                }
                cout<<arr[r][c]; 
            }
            else if((r+c)==size-1 && c<r)
            {
                for(int i=1; i<=c; i++)
                {
                    cout<<"  ";
                    cnt++;
                }
                cout<<arr[r][c];
                
            }
            
        }
        cout<<endl;
        cnt=0;
    }

    return 0;
    
    
}