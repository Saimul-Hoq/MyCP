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
        char line[1001];
        gets(line);

        //sorting:
        for(int i=0; i<strlen(line)-1; i++)
        {
            for(int j=i+1; j<strlen(line); j++)
            {
                int linei = line[i];
                int linej = line[j];
                
                if(linei>linej)
                {
                    char temp = line[i];
                    line[i]=line[j];
                    line[j]=temp;
                }
            }
        }

        

        int check = 0;
        for(int i=0; i<strlen(line); i++)
        {
            for(int j=0; j<strlen(line); j++)
            {
                if(line[i]==line[j] && j<i)
                {
                    check = 1;
                    break;
                }
                else if(line[i]==line[j] && j>=i)
                {
                    
                    count++;
                    
                }
            }

            if(check==0)
            {
                
                printf("%c = %d\n", line[i], count);
            }

            count = 0;
            check = 0;



        }

        printf("\n");
    }

    return 0;
}