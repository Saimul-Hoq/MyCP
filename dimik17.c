#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d", &t);
    getchar();

    for(int k=0; k<t; k++)
    {
        char line[1001];
        gets(line);

        int count = 0;

        for(int i=0; i<strlen(line); i++)
        {
            if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u')
            {
                count++;
            }
        }

        printf("Number of vowels = %d\n", count);
        
    }

    return 0;
}