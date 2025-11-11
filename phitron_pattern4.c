#include<stdio.h>

int main()
{
    int n, space, p=1;
    scanf("%d", &n);
    space = 2*n-2;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=space; j++)
        {
            printf(" ");
        }
        space-=2;
        for(int j=1; j<=p; j++)
        {
            printf("* ");
        }
        p+=2;
        printf("\n");

    }

    return 0;
}