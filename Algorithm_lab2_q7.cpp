#include<iostream>
#include<stdlib.h>
using namespace std;


int main()
{
    int row, col;
    cout<<"Enter row and column size: ";
    cin>>row>>col;

    int arr[row][col];
    cout<<"Enter Elements: ";
    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            cin>>arr[r][c];
        }
    }
    int sum=0;


    for(int r=0, c=0; r<row; r++, c++)
    {
        sum+=arr[r][c];
    }

    for(int r=0, c=col-1; r<row; r++, c--)
    {
        sum+=arr[r][c];
    }

    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = "<<(double)sum/(row*col)<<endl;

    return 0;

    

}