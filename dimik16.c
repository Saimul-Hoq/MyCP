#include<stdio.h>
#include<string.h>



/*int main()
{
    int t;
    scanf("%d", &t);
    getchar();

    for(int k=0; k<t; k++)
    {
        char line[1001];
        gets(line);
        
        int initial = 0,final;
        for(int i=0; i<=strlen(line); i++)
        {
            final = i-1;
            int terminal = (final-initial+1)/2;
            if(line[i]==' ' || line[i]=='\0')
            {
                for(int j=1; j<=terminal; j++,initial++,final--)
                {
                    char temp = line[initial];
                    line[initial]=line[final];
                    line[final]=temp;
                }
                initial = i+1;
            }
        }

        printf("%s\n", line);
        
    }

    return 0;
}*/

int main()
{
    int t;
    scanf("%d", &t);
    getchar();

    for(int k=0; k<t; k++)
    {
        char line[1001];
        gets(line);

        int initial = 0, final;
        for(int i=0; i<=strlen(line); i++)
        {
            
            if(line[i]==' ' || line[i]=='\0')
            {
                final = i-1;
                int terminal = (final-initial+1)/2;
                for(int j=1; j<=terminal; j++, initial++, final--)
                {
                    char temp = line[initial];
                    line[initial]=line[final];
                    line[final]=temp;

                }
                initial = i+1;
            }
        }

        printf("%s\n", line);
    }

    return 0;
}