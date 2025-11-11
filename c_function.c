#include<stdio.h>

/*int input(int n, int arr[])
{
    
    
    printf("Enter the elements:\n");
    for(int i=0; i<n; i++)
    {
        printf("\nElement %d = ", i+1);
        scanf("%d", &arr[i]);
    }

    return n;
    
}

int findmax(int n, int arr[])
{
    int i=0;
    for(int j=0; j<n; j++)
    {
       if(arr[i]<arr[j])
       {
            i=j;
       }     
    }

    return arr[i];            
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    input(n,arr);
    
    int max = findmax(n, arr);
    printf("Max = %d", max);

    return 0;

}*/

void change(int &n);

int main()
{
    int i=5;
    printf("I = %d\n", i);
    change(i);
    printf("I = %d", i);
}

void change(int &n)
{
    n=7;
}