#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000], b[1000], c[1000];
    scanf("%s %s %s", a, b, c);

    //minimum:
    char min[1000];
    strcpy(min, a);
    if(strcmp(min, b)>0)
    {
        strcpy(min, b);
    }
    if(strcmp(min, c)>0)
    {
        strcpy(min, c);
    }

    printf("%s\n", min);

    //Maximum:
    
    strcpy(min, a);
    if(strcmp(min, b)<0)
    {
        strcpy(min, b);
    }
    if(strcmp(min, c)<0)
    {
        strcpy(min, c);
    }

    printf("%s\n", min);



    return 0;
    
}