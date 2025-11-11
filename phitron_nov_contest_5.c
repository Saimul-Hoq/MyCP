#include<stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];

    for(int r=0; r<n; r++)
    {
        for(int c=0; c<m; c++)
        {
            scanf("%d", &arr[r][c]);
        }
    }

    int top, bottom, left, right, temp, count=0;
    for(int r=0; r<n; r++)
    {
        for(int c=0; c<m; c++)
        {
            //Top:
            temp=r-1;
            if(temp>=0 && temp<n)
            {
                top=arr[temp][c];
            }
            else
            {
                top=-1;
            }

            //Bottom:
            temp=r+1;
            if(temp>=0 && temp<n)
            {
                bottom=arr[temp][c];
            }
            else
            {
                bottom=-1;
            }

            //Left:
            temp=c-1;
            if(temp>=0 && temp<m)
            {
                left=arr[r][temp];
            }
            else
            {
                left=-1;
            }

            //Right:
            temp=c+1;
            if(temp>=0 && temp<m)
            {
                right=arr[r][temp];
            }
            else
            {
                right=-1;
            }

            if(arr[r][c]>top && arr[r][c]>bottom && arr[r][c]>left && arr[r][c]>right)
            {
                count++;
                printf("%d %d\n", r+1, c+1);
            }
        }
    }

    printf("%d\n", count);

    return 0;


}