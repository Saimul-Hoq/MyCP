#include<stdio.h>

/*int main()
{
    int n, num;
    scanf("%d", &n);

    long long sum=0;

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &num);
        sum+=num;
    }

    if(sum<0)
    {
        printf("%lld\n", sum*(-1));
    }
    else
    {
        printf("%lld\n", sum);
    }
    return 0;
}*/

int main()
{
    int n;
    scanf("%d", &n);
    
    int num, min, position;
    scanf("%d", &num);
    min=num;
    position = 1;
    

    for(int i=1; i<n; i++)
    {
        scanf("%d", &num);
        if(min>num)
        {
            min=num;
            position=i+1;
        }
    }



   

    printf("%d %d\n", min, position);

    return 0;
}