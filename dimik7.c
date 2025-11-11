#include<stdio.h>
#include<stdlib.h>


int main()
{
    char str[1000000];
    scanf("%[^\n]",str);
    printf("%s\n", str);

    char *remainder;
    int num;
    num=strtol(str, &remainder, 0);
    printf("%d\n", num);
    
    
    return 0;
}