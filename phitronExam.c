#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int t;
    scanf("%d", &t);
    
    while(t--)
    {
        long long m, result, miss;
        int a, b, c;
        scanf("%lld", &m);
        getchar();
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);




        
        result = (long long)a*b*c;
        
        if(m==0)
        {
            printf("0\n");
        }
        else if(m%result==0)
        {
            miss=m/result;
        
            printf("%lld\n", miss);
        }
        else
        {
            printf("-1\n");
        }


    }

    return 0;

}





