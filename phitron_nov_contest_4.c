#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min=arr[0], max=arr[0], countMin=0, countMax=0;
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<i; j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
            }
            else if(arr[j]>max)
            {
                max=arr[j];
            }
        }
        if(arr[i]>max)
        {
            countMax++;
        }
        else if(arr[i]<min)
        {
            countMin++;
        }
    }

    printf("%d %d\n", countMax, countMin);

    return 0;
}