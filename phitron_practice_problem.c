#include<stdio.h>

/*int main()
{
    int a, b;
    char ch;
    scanf("%d", &a);
    getchar();
    scanf("%c", &ch);
    scanf("%d", &b);

    if(ch=='>' && a>b)
    {
        printf("Right\n");
    }
    else if(ch=='<' && a<b)
    {
        printf("Right\n");
    }
    else if(ch=='=' && a==b)
    {
        printf("Right\n");
    }
    else
    {
        printf("Wrong\n");
    }

    return 0;
}*/

/*int main()
{
    int a, b, c;
    char s, q;
    scanf("%d", &a);
    getchar();
    scanf("%c", &s);
    scanf("%d", &b);
    getchar();
    scanf("%c", &q);
    scanf("%d", &c);



    if(s=='+' && (a+b)==c)
    {
        printf("Yes\n");
    }
    else if(s=='-' && (a-b)==c)
    {
        printf("Yes\n");
    }
    else if(s=='*' && (a*b)==c)
    {
        printf("Yes\n");
    }
    else
    {
        if(s=='+')
        {
            printf("%d\n", a+b);
        }
        else if(s=='-')
        {
            printf("%d\n", a-b);
        }
        else if(s=='*')
        {
            printf("%d\n", a*b);
        }
    }

    return 0;
}*/

/*int main()
{
    int pass;
    
    while(scanf("%d", &pass) != EOF)
    {
        if(pass==1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }

    }

    return 0;
}*/

/*int main()
{
    int n;
    scanf("%d", &n);
    int space = n-1, p=1;

    for(int i=1; i<=n; i++)
    {
        for(int s=1; s<=space; s++)
        {
            printf(" ");
        }
        space--;
        
        for(int star=1; star<=p; star++)
        {
            printf("*");
        }
        p+=2;
        printf("\n");

    }
    space=0; 
    p-=2;
    for(int i=1; i<=n; i++)
    {
        for(int s=1; s<=space; s++)
        {
            printf(" ");
        }
        space++;
       
        for(int star=1; star<=p; star++)
        {
            printf("*");
        }
        p-=2;
        printf("\n");

    }

    return 0;
}*/

int main()
{
    char name[]="My name is \"Saimul Hoque\".";
    //scanf("%[^\n]s", name);
    printf("%s\n", name);

    

    return 0;
}