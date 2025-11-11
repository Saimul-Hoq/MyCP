#include<stdio.h>

int main()
{
    char ch;
    //getchar();
    scanf("%c", &ch);

    //int ch = c;

    if(ch>='0' && ch<='9')
    {
        printf("IS DIGIT\n");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("ALPHA\nIS CAPITAL\n");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("ALPHA\nIS SMALL\n");
    }

    return 0;
}