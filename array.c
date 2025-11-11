#include<stdio.h>


int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10}, carr[10];

    /*for(int i=9, j=0; i>=0, j<=9; i--,j++)
    {
        carr[j]=arr[i];
    }

    for(int i=0; i<10; i++)
    {
        arr[i]=carr[i];
    }

    for(int i=0; i<10; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0; i<10; i++)
    {
        printf("%d ",carr[i]);
    }*/

    for(int i=0, j=9; i<=9; i++, j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;    
    
    }

    for(int i=0; i<10; i++)
    {
        printf("%d ",arr[i]);
    }

                          

    return 0;
}