#include<stdio.h>
#include<string.h>

int main()
{
    /*int arr[4][10]={
        {1,2,3,4,5,6,7,8,9,10},
        {12,45,677,34,56,354,766,33,665,3454},
        {44,344,33,34,44,34,4,556,45,55},
        {4,45,54,5,634,5,35,53,35,56}
    };

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<10; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }*/

    //Matrix Result:___
    /*int r,c;
    printf("Enter total terms:\n");
    scanf("%d", &r);
    printf("Enter total student number:\n");
    scanf("%d", &c);
    double arr[r+1][c];

    for(int i=0; i<r; i++)
    {
        printf("Term %d marks:\n", i+1);
        for(int j=0; j<c; j++)
        {
            printf("Roll %d: ", j+1);
            scanf("%lf", &arr[i][j]);
            printf("\n");
        }
    }

              
    for(int j=0; j<c; j++)
    {
        
        arr[r][j]= arr[0][j]*0.25 + arr[1][j]*0.25 + arr[2][j]*0.5 ;
        
    }
     printf("\n");
     printf("Result:\n");
     printf("_______\n\n");
    
    printf("       ");
    for(int i=0; i<c; i++)
    {
        printf("   Roll %d", i+1);
    }
    printf("\n");


    for(int i=0; i<=r; i++)
    {
        if(i==r)
        {
            printf("\nTotal  =");
        }
        else
        {
            printf("Term %d =", i+1);
        }
        for(int j=0; j<c; j++)
        {
            printf("  %0.2lf  ", arr[i][j]);
        }
        printf("\n");
    }*/
    
    
    //Row Namta:
    /*for(int i=1; i<=10; i++)
    {
        for(int j=1; j<=10; j++)
        {
            printf("%d * %d = %d\t", i, j, i*j);
        }
        printf("\n");
    }*/

    //Column Namta:
    /*int even=0, odd=0, sum=0;
    for(int j=1; j<=10; j++)
    {
        for(int i=1; i<=10; i++)
        {
            printf("%d * %d = %d\t", i, j, i*j);

            sum+=(i*j);
            if((i*j)%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        printf("\n");
    }
    printf("Sum = %d\nEven elements = %d\nOdd elements = %d", sum, even, odd);*/

    /*int arr[10][10], sum=0, even=0, odd=0;

    for(int c=0; c<10; c++)
    {
        for(int r=0; r<10; r++)
        {
            arr[r][c]=(c+1)*(r+1);

            sum+=arr[r][c];

            if(arr[r][c]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }

    for(int r=0; r<10; r++)
    {
        for(int c=0; c<10; c++)
        {
            printf("%d * %d = %d\t", (c+1),(r+1), arr[r][c]);
        }
        printf("\n");
    }

    printf("Sum = %d\nEven = %d\nOdd = %d", sum, even, odd);*/

    //char 2D Array:
    /*int n;
    printf("How many name you want to add: \n");
    scanf("%d", &n);
    char name[n][100];

    printf("Enter names:\n");
    for(int r=0; r<n; r++)
    {
        scanf("%s", &name[r]);
    }

    for(int r=0; r<n; r++)
    {
        printf("%s\n", name[r]);
    }

    for(int r=0; r<n; r++)
    {
        for(int c=0; c<strlen(name[r]); c++)
        {
            printf("%c  ", name[r][c]);
        }
    }*/

    int row, col, sumrow=0, sumcol=0;
    printf("Enter row and column:\n");
    scanf("%d %d", &row, &col);
    int arr[row][col], carr[col][row];

    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            printf("Row %d, Column %d = ", r+1, c+1);
            scanf("%d", &arr[r][c]);
            printf("\n");
        }
        printf("\n");
    }

    printf("Actual:\n");
    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            printf("%d   ", arr[r][c]);
        }
        printf("\n");
    }
    
    printf("Reversed:\n");
    for(int c=0; c<col; c++)
    {
        for(int r=0; r<row; r++)
        {
            printf("%d   ", arr[r][c]);
        }
        printf("\n");
    }

    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            carr[c][r]=arr[r][c];
        }
    }

    printf("Reversed Array:\n");
    for(int r=0; r<col; r++)
    {
        for(int c=0; c<row; c++)
        {
            printf("%d   ", carr[r][c]);
        }
        printf("\n");
    }

    
    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            sumrow+=arr[r][c];
        }
        printf("Row %d sum = %d\n", r+1, sumrow);
        sumrow=0;
    }
    
    for(int c=0; c<col; c++)
    {
        for(int r=0; r<row; r++)
        {
            sumcol+=arr[r][c];
        }
        printf("Column %d sum = %d\n", c+1, sumcol);
        sumcol=0;
    }
    
    return 0;
}