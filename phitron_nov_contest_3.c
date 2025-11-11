#include<stdio.h>
#include<string.h>

int main()
{
    int arr[26]={0}, temp, count=0, check=0;

    char str[1000];
    scanf("%s", str);

    for(int i=0; i<strlen(str); i++)
    {
        temp=str[i]-'a';
        arr[temp]++;
    }

    for(int i=0; i<26; i++)
    {
        
        if(arr[i]%2==1)
        {
            count++;
        }
    }

    
        
        
    if(count==0)
    {
        printf("%d\n", count);
    }
    else
    {
        printf("%d\n", count-1);
    }
        
    


    return 0;
}