#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    /*char binary[1000];
    printf("Enter a Binary number:\n");
    scanf("%s", &binary);

    int position = strlen(binary)-1, decimal=0;
    for(int i=0; i<strlen(binary); i++)
    {
        if(binary[position]=='1')
        {
            decimal+=pow(2, i);
        }
        position--;
    }

    printf("Decimal = %d\n", decimal);*/

    //Binary-Decimal:
    /*char binary[10000];
    printf("Enter a binary number:\n");
    scanf("%s", &binary);
    long long  p=strlen(binary)-1, decimal=0;

    for(int i=0; i<strlen(binary); i++)
    {
        decimal+=(binary[i]-'0')*pow(2,p);
        p--;
    }
    printf("Decimal = %d\n", decimal);*/

    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    int arr[n];

    int i=0;
    while(n!=0)
    {
        arr[i]=n%2;
        n=n/2;
        i++;
    }

    i--;
    printf("Binary = ");
    while(i>=0)
    {
        printf("%d", arr[i]);
        i--;
    }

    return 0;
}