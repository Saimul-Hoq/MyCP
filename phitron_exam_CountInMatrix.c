#include<stdio.h>

int main()
{
    int n,m,x;
    scanf("%d %d %d", &n, &m, &x);
    int box[n][m];
    int arr[x];
    int number[1001]={0};
    

    for(int r=0; r<n; r++)
    {
        for(int c=0; c<m; c++)
        {
            scanf("%d", &box[r][c]);
            number[box[r][c]]++;
        }
    }
    for(int i=0; i<x; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<x; i++)
    {
       printf("%d\n", number[arr[i]]);
    }

    return 0;


    
}