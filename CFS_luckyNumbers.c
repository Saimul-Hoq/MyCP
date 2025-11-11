#include<stdio.h>

int main()
{
    int num, a, b;
    scanf("%d", &num);

    a=num%10;
    num/=10;
    b=num;

    if((a%b)==0 || (b%a)==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;



}