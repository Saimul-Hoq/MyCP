#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
//Module 10:
/*int main()
{
    //escape sequence: 
    //Adding "" inside a string.
    char name[]="My name\' is \"Saimul \\Hoque\".";
    //scanf("%[^\n]s", name);
    printf("%s\n", name);

    

    return 0;
}*/

//string -> Int
/*int main()
{
    char snum[100];
    scanf("%s", snum);

    int num=0, n;
    for(int i=0; i<=strlen(snum)-1; i++)
    {
        n = snum[i] - '0';
        num = num*10 + n;
    }

    printf("%d\n", num);


    return 0;
}*/

/*int main()
{
    char str1[]="Saim";
    char str2[]="Hoque";
    strcpy(str2, str1);

    printf("%s , %s\n", str1, str2);

    return 0;
}*/

/*int main()
{
    char a[]="Zapple", b[]="Zebra";
    
    int cmp = strcmp(a, b);

    if(cmp>0)
    {
        printf("%s\n", a);
    }
    else
    {
        printf("%s\n", b);
    }

    printf("%d\n", strcmp(a, b));

    
    int x = -10;
    x=abs(x);
    printf("%d\n", x);

    return 0;

}*/

/*int main()
{
    printf("%lf\n", ceil(10.25));
    printf("%lf\n", floor(10.25));
    printf("%lf\n", round(10.25));
    printf("%lf\n", round(10.5));
    printf("%0.2lf\n", 10.218956);

    return 0;
}*/

void recursion(int a)
{
    if(a>10)
    {
        return;
    }

    recursion(a+1);
    printf("%d ", a);
}

//int sum=0;

/*int summation(int n)
{
    if(n==0)
    {
        return 0;
    }
    //int sum=0;
    sum+=n;
    summation(n-1);

    return sum;

    
}*/

/*int i=0;
int sum=0;
int sum_arr(int arr[], int size)
{
    if(i==size)
    {
        return 0;
    }

    sum+=arr[i];
    i++;
    sum_arr(arr, size);

    return sum;

}*/

/*void sum_arr(int arr[], int i, int size)
{
    if(i==size)
    {
        return;
    }

    if(i!=0)
    {
        arr[i]+=arr[i-1];
    }
    i++;
    sum_arr(arr,i, size);

}*/

int getSum(int arr[], int i, int j)
{
    if(i==j)
    {
        return 0;
    }

    return arr[i] + getSum(arr, i+1, j);
}
    

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};

   
    printf("%d\n", getSum(arr, 0, 10));
    printf("\n");

    return 0;
}