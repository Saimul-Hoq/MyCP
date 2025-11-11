#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int carr[n];
    int arr[100001]={0}, count=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &carr[i]);
        arr[carr[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        if(arr[carr[i]]==1)
        {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;    
}