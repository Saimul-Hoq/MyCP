#include<stdio.h>

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

    int r,c;
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

    
    printf("\nResult:\n");
    
    
    for(int j=0; j<c; j++)
    {
        
        arr[r][j]= arr[0][j]*0.25 + arr[1][j]*0.25 + arr[2][j]*0.5 ;
        
    }

    for(int i=0; i<=r; i++)
    {
        if(i==r)
        {
            printf("Result: \n");
        }
        else
        {
            printf("Term %d:\n", i+1);
        }
        for(int j=0; j<c; j++)
        {
            printf("Roll %d = ", j+1);
            printf("%d\n", arr[i][j]);
            
        }
        printf("\n");
    }
    

    return 0;
}