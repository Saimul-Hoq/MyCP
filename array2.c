#include<stdio.h>


int main()
{
     /*int arr[]={1,2,3,4,5,6,7,8,9,10}, carr[10];*/

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

    /*int temp;
    for(int i=0, j=9; i<10/2; i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    for(int i=0; i<10; i++)
    {
        printf("%d ",arr[i]);
    }*/

    int n;
    printf("Enter the numbers of student: ");
    scanf("%d", &n);
    
    int fmarks[n], hmarks[n], finalmarks[n];
    double totalmarks[n];

    printf("\nFirst Term Marks: \n");
    for(int i=0; i<n; i++)
    {
        printf("\nRoll = %d; Enter Mark = ", i+1);
        scanf("%d", &fmarks[i]);
    }

    printf("\n2nd Term Marks: \n");
    for(int i=0; i<n; i++)
    {
        printf("\nRoll = %d; Enter Mark = ", i+1);
        scanf("%d", &hmarks[i]);
    }

    printf("\nFinal Term Marks: \n");
    for(int i=0; i<n; i++)
    {
        printf("\nRoll = %d; Enter Mark = ", i+1);
        scanf("%d", &finalmarks[i]);
    }

    printf("\nMath Result: ");

    for(int i=0; i<n; i++)
    {
        totalmarks[i]=fmarks[i]/4.0 + hmarks[i]/4.0 + finalmarks[i]/2.0;
        printf("\nRoll = %d\tTotal Mark = %0.2lf", i+1, totalmarks[i]);
    }

    int count=0;
    double f;
    printf("The number you want to find: ");
    scanf("%lf", &f);

    for(int i=0; i<n; i++)
    {
        if(totalmarks[i]==f)
        {
            count++;
        }
    }

    printf("\n%0.2lf got %d students.", f, count);

                          

    return 0;
}