#include<stdio.h>

/*int main()
{
    int i, f, num, mid;
    printf("Enter the limit: ");
    scanf("%d %d", &i, &f);
    printf("\nEnter the number: ");
    scanf("%d", &num);
    int p=(f-i)+1, arr[p];

    for(int k=0; k<p; k++)
    {
        arr[k]=i;
        i++;
    }
    i=0, f=p-1;
    
    while(i<=f)
    {
        mid=(i+f)/2;

        if(num==arr[mid])
        {
            break;
        }
        else if(num>arr[mid])
        {
            i=mid+1;
        }
        else
        {
            f=mid-1;
        }
    }

    if(i>f)
    {
        printf("%d doesn't exist", num);
    }
    else
    {
        printf("%d exists.  Serial = %d", num, mid+1);
    }

    return 0;

    
}*/

void input(int n, int arr[]);
void sort(int n, int arr[]);
void bisearch(int n, int num, int arr[]);



void input(int n, int arr[])
{
    printf("\nEnter the elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void sort(int n, int arr[])
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void bisearch(int n, int num, int arr[])
{
    int idex=0, fdex=n-1, mid;

    while(idex<=fdex)
    {
        mid=(idex+fdex)/2;

        if(num==arr[mid])
        {
            break;
        }
        else if(num>arr[mid])
        {
            idex=mid+1;
        }
        else
        {
            fdex=mid-1;
        }
    }

    if(idex>fdex)
    {
        printf("%d doesnt Exist.", num);
    }
    else
    {
        printf("%d exists.", num);
    }
}

int main()
{
    int n, num;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    input(n, arr);
    printf("\nWant to Search: ");
    scanf("%d", &num);
    sort(n, arr);
    bisearch(n, num, arr);

    return 0;
}