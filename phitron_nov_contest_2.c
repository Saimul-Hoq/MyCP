#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[1000], b[1000];

    scanf("%s %s", a, b);

    for(int i=0; i<strlen(b); i++)
    {
        for(int j=i; j<=strlen(a); j++)
        {
            if(a[j]==b[i])
            {
                char temp = a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }

    if(strcmp(a, b)==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}