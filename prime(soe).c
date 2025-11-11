#include<stdio.h>
#include<string.h>
#include<math.h>


/*int arr[40], size=40;

void sieve()
{
    int root=sqrt(size);

    for(int i=2; i<size; i++)
    {
        arr[i]=1;
    }

    for(int i=2; i<=root; i++)
    {
        if(arr[i]==1)
        {
            for(int j=2; i*j<=size; j++)
            {
                arr[i*j]=0;
            }
        }
    }
}

int primefunc(int n)
{
    if(n<=1)
    {
        return 0;
    }

    return arr[n];
}

int main()
{
    int n;
    printf("Enter any number: \n");
    sieve();
    while(scanf("%d", &n)==1)
    {
        if(n>=size)
        {
            printf("The number should be less than %d\n", size);
            continue;
        }

        if(primefunc(n)==1)
        {
            printf("%d is Prime number.\n", n);
        }
        else
        {
            printf("%d is not a prime number.\n", n);
        }


    }

    return 0;
    

    
}*/

void sieve(char arr[], int h)
{
    int root=sqrt(h);

    for(int i=2; i<=h; i++)
    {
        arr[i]='p';
    }

    for(int i=2; i<=root; i++)
    {
        if(arr[i]=='p')
        {
            for(int j=i*i; j<=h; j+=i)
            {
                arr[j]='n';
            }
        }
    }
}

int main()
{
    int h,n;
    printf("Enter the highest limit:");
    scanf("%d", &h);
    char arr[h+1];
    sieve(arr, h);
    printf("\nEnter the number: ");
    while(scanf("%d", &n)==1)
    {
        if(n>h)
        {
            printf("\nThe number must be less than %d\n", h);
        }
        else if(n<=1)
        {
            printf("%d is NOT a prime number.\n", n);
        }
        else
        {
            if(arr[n]=='p')
            {
                printf("%d is a PRIME number.\n", n);
            }

            else
            {
                printf("%d is NOT a prime number.\n", n);
            }
        }
    }

    return 0;
}