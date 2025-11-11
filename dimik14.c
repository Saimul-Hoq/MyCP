#include<stdio.h>
#include<string.h>


int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    int count = 0;

    for(int k=0; k<t; k++)
    {
        char line[10001], ch[2];
        gets(line);
        gets(ch);

        for(int i=0; i<strlen(line); i++)
        {
            if(line[i]==ch[0])
            {
                count++;
            }
        }

        if(count>0)
        {
            printf("Occurrence of '%c' in '%s' = %d\n", ch[0], line, count);
        }
        else
        {
            printf("'%c' is not present\n", ch[0]);
        }

        count=0;

    }

    return 0;
}