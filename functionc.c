#include<stdio.h>



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
    printf("Enter the elements:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", arr[i]);
    }
    
    int max=findmax(n, arr);
    printf("Max = %d", max);

    return 0;

}