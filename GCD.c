#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d",&a);
    scanf("%d", &b);

    if(a>b)
    {
        int r=a%b;
        while(r>=0)
        {
            
            if(r==0)
            {
                printf("GCD= %d", b);
                break;
            }
            else
            {
                int tempa=a;
                a=b;
                b=tempa%b;
            }
            r=a%b;
        }
        
    }

    
        
    
                                                          
    return 0;
}