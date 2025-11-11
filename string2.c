#include<stdio.h>
#include<string.h>
#include<math.h>


int length_func(char ch[])
{    
    int i=0;
    for( ; ch[i]!='\0'; i++);

    return i;
}

/*int main()
{
    char ch[1000];

    int length;

    while(NULL!=gets(ch))
    {
        length=length_func(ch);
        printf("Length = %d\n", length);
    }

    char ch[1000];
    gets(ch);
    printf("%s\n", ch);
    return 0;
}*/

/*int main()
{
    char str1[100], str2[100], str3[200];
    printf("Emter two strings: ");
    scanf("%s %s", &str1, &str2);
    int length1 = length_func(str1), length2 = length_func(str2);

    int j=0;

    for(int i=0; i<length1; i++, j++)
    {
        str3[j]=str1[i];
    }

    for(int i=0; i<length1; i++, j++)
    {
        str3[j]=str2[i];
    }

    str3[j]='\0';

    printf("Concatenated String: %s", str3);

    return 0;

}*/

/*int compare(char str1[], char str2[], int length1, int length2)
{
    if(length1==length2)
    {
        for(int i=0; str1[i]!='\0' && str2[i]!='\0'; i++)
        {
            if(str1[i]==str2[i])
            {
                if(i==(length1-1) || i==(length2-1))
                {
                    return 0;
                }

                continue;
            }

            else if(str1[i]>str2[i])
            {
                return 1;
                break;
            }

            else
            {
                return -1;
                break;
            }
        }
    }

    else if(length1>length2)
    {
        return 1;
    }

    else
    {
        return -1;
    }
}

int main()
{
    char str1[100], str2[100];
    printf("Enter String 1 = ");
    scanf("%s", &str1);
    printf("Enter String 2 = ");
    scanf("%s", &str2);
    int length1=length_func(str1), length2=length_func(str2);
    int comp=compare(str1, str2, length1, length2);
    if(comp==1)
    {
        printf("%s is greater than %s", str1, str2);
    }
    else if(comp==-1)
    {
        printf("%s is greater than %s", str2, str1);
    }
    else
    {
        printf("%s and %s are same", str1, str2);
    }

    return 0;

}*/
//word without puntuation:                                                                                                                                                    
/*int main()
{
    char s[1000], word[1000];
    gets(s);
    
    int k=0, p=-1;
    for(int i=0; i<length_func(s); i++)
    {
        if(s[i]>='a' && s[i]<='z'  || s[i]>='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9')
        {
            word[k]=s[i];
            k++;
            p++;
        }

        if(i!=p || i==(strlen(s)-1))
        {
            word[k]='\0';
            if(word[0]>='a' && word[0]<='z' )
            {
                word[0]=(word[0]-'a')+'A';
            }

            if(word[0]!='\0')
            {
                printf("%s\n", word);
            }

            
            k=0;
            p=i;
        }
    }

    return 0;

}*/

//Prime Number:

/*int primefunc(int n)
{
    if(n<=1)
    {
        return 0;
    }

    if(n==2)
    {
        return 1;
    }

    if(n%2==0)
    {
        return 0;
    }

    int root=sqrt(n);
    for(int i=3; i<=root; i=i+2)
    {
        if(n%i==0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int i, f, k, j=0;
    printf("Enter limit: ");
    scanf("%d %d", &i, &f);
    int e=(f-i)+1, arr[e];

    for(; i<=f; i++)
    {
        if(primefunc(i)==1)
        {
            arr[j]=i;
            j++;
        }
    }

    printf("There are %d Prime numbers.\n", j);
    printf("They are: ");
    for(int i=0; i<j; i++)
    {
        printf("%d ", arr[i]);
    }

    
    return 0;
}*/

//Sieve of Eratosthenes:
int arr[40], size=40;

void sieve()
{
    int root=sqrt(size);

    for(int i=2; i<size; i++)
    {
        arr[i]=1;
    }

    for(int i=2; i<=root; i++)
    {
        if(arr[i]==1)
        {
            for(int j=2; i*j<=size; j++)
            {
                arr[i*j]=0;
            }
        }
    }
}

int primefunc(int n)
{
    if(n<=1)
    {
        return 0;
    }

    return arr[n];
}

int main()
{
    int n;
    printf("Enter any number: \n");
    sieve();
    while(scanf("%d", &n)==1)
    {
        if(n>=size)
        {
            printf("The number should be less than %d\n", size);
            continue;
        }

        if(primefunc(n)==1)
        {
            printf("%d is Prime number.\n", n);
        }
        else
        {
            printf("%d is not a prime number.\n", n);
        }


    }

    return 0;
    

    
}