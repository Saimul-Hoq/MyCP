#include<stdio.h>

int main()
{
    int i, f, mid, num, cnt=0;
    printf("Enter your range: ");
    scanf("%d %d", &i, &f);
    printf("Enter the number you want to find.");
    scanf("%d", &num);

    int n=(f-i)+1, arr[n];
    int idex=0, fdex=n-1;

    for(int k=0; k<n; k++)
    {
        arr[k]=i;
        i++;
    }

    while(idex!=fdex)
    {
        mid=(idex+fdex)/2;

        if(arr[mid]==num)
        {
            printf("%d Exists.\tSerial = %d", num, mid+1);
            cnt=1;
            break;
        }
        else if(arr[mid]>num)
        {
            idex=mid+1;
        }
        else
        {
            fdex=mid-1;
        }
    }

    if(cnt==0)
    {
        printf("%d doesn't exist here.", num);
    }

    return 0;

    
    

}