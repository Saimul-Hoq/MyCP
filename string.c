#include<stdio.h>

/*int main()
{
    char name1[]={'S', 'A', 'I', 'M', '\0'};
    char name2[]="SAIM";
    printf("Name1= %s\nName2 = %s", name1, name2);*/

    /*char name1[]={'s', 'a', 'i', 'm'};
    char name2[]={'s', 'a', 'i', 'm' ,'\0'};

    printf("Name1 = %c", name1[1]);
    printf("\nName2 = %s", name2);*/

    /*char country[]={'b', 'a', '\0', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '0'};
    printf("%s", country);*/

    /*char ch[1000];
    scanf("%s", &ch);
    int length=0;
    for(int i=0; ch[i]!='\0'; i++)
    {
        length++;
    }

    printf("Length = %d", length);

    for(int i=0; i<length; i++)
    {
        if(ch[i]>='a' && ch[i]<='z')
        {
            ch[i]=(ch[i]-'a')+'A';
        }
        else if(ch[i]>='A' && ch[i]<='Z')
        {
            ch[i]=(ch[i]-'A')+'a';
        }
    }

    printf("\n%s", ch);

    

    

    return 0;
}*/

int length_func(int ch[])
{
    int length=0;
    for(int i=0; ch[i]!='\0'; i++)
    {
        length++;
    }

    return length;
}

int main()
{
    int ch[1000];

    int length;

    while(scanf("%s", ch))
    {
        length=length_func(ch);
        printf("Length = %d", length);
    }

    return 0;
}

