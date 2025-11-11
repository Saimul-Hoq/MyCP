#include<iostream>
using namespace std;
#define endl "\n"

int main()
{
    int arr[5][5], col, row, cntcol, cntrow;
    for(int r=0; r<5; r++)
    {
        for(int c=0; c<5; c++)
        {
            cin>>arr[r][c];
            if(arr[r][c]==1)
            {
                row=r;
                col=c;
            }
        }
    }

    if(row>2)
    {
        cntrow=row-2;
    }
    else
    {
        cntrow=2-row;
    }
    if(col>2)
    {
        cntcol=col-2;
    }
    else
    {
        cntcol=2-col;
    }

    cout<<cntrow+cntcol<<endl;

    return 0;

}