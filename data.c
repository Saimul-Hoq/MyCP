#include<stdio.h>

int main()
{
    /*double a = (int)50.45;
    int b=60, sum=a+b;
    printf("Sum is %d\n", sum);
    printf("%0.2lf + %d = %d",a,b,sum);

    double i;
    int j;
    printf("\n");
    scanf("%lf %d", &i, &j);
    printf("value of i is %0.2lf\nvalue of j is %d", i,j);*/

    /*char ch;
    printf("Enter the first leter of your name: ");
    //scanf("%c",&ch);
    ch=getchar();
    printf("The first letter of your name is: %c ",ch);*/

    /*char sign;
    double n1, n2;
    printf("Enter two numbers: ");
    scanf("%lf %lf",&n1, &n2);
    sign='+';
    printf("%0.2lf %c %0.2lf = %0.2lf\n",n1,sign,n2,n1+n2);
    sign='-';
    printf("%0.2lf %c %0.2lf = %0.2lf\n",n1,sign,n2,n1-n2);
    sign='*';
    printf("%0.2lf %c %0.2lf = %0.2lf\n",n1,sign,n2,n1*n2);
    sign='/';
    printf("%0.2lf %c %0.2lf = %0.2lf\n",n1,sign,n2,n1/n2);*/

    //Lower Case and upper case:
    /*char ch;
    printf("Enter a character: ");
    ch=getchar();

    if(ch>='a' && ch<='z')
    {
        printf("%c is lower case.\n",ch);
    }

    else if(ch>='A' && ch<='Z')
    {
        printf("%c is uppercase.", ch);
    }*/

    /*int n, d;
    printf("Enter a number and the devider: ");
    scanf("%d %d", &n, &d);
    int remainder1, remainder2=n%d, result=n/d;
    remainder1=n-d*result;
    printf("result = %d\nRemainder1 = %d\nRemainder2 = %d\n", result, remainder1, remainder2);*/

    /*char ch;
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i'  || ch=='o' || ch=='u')
    {
        printf("%c is a Vowel", ch);
    }

    else
    {
        printf("%c is a consonant", ch);
    }*/

    /*int i=0;
    while(i<10)
    {
        i++;

        if(i%2==0)
        {
            continue;
        }

        printf("%d\n",i);
    }*/

    /*int n, m=0;
    scanf("%d", &n);

    for(int i=1; i<=10; i++)
    {
        printf("%d ", n);
        for(int j=1; j<i; j++)
        {
            printf("+ %d ", n);
        }
        m=m+n;
        printf("= %d\n", m);
        
    }*/

    /*int i,f;
    printf("Enter limit: ");
    scanf("%d %d", &i, &f);
    for(int n=i; n<=f; n++)
    {
        printf("Multiplication table of %d:\n", n);
        for(int j=1; j<=10; j++)
        {
            printf("%d x %d = %d\n", n, j, n*j);
        }
    }*/

    /*int n,m;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d",&m);

        if(m%11==0)
        {
            continue;
        }

        printf("%d ",m);
    }*/

    /*for(int a=1; a<=3; a++)
    {
        for(int b=1; b<=3; b++)
        {
            for(int c=1; c<=3; c++)
            {
                printf("%d %d %d\n", a, b ,c );
            }
        }
    }*/

    /*for(int a=1; a<=3; a++)
    {
        for(int b=1; b<=3; b++)
        {
            for(int c=1; c<=3; c++)
           {
                if(b!=a && c!=a && c!=b)
                {
                    printf("%d %d %d\n",a ,b,c);
                }
           }
        }
    }*/

    //Equation:
    /*double a1, b1,c1, a2,b2,c2;
    printf("Enter the values of coefficient and consonent:\na1= ");
    scanf("%lf",&a1);
    printf("\nb1= ");
    scanf("%lf",&b1);
    printf("\nc1= ");
    scanf("%lf",&c1);
    printf("\na2= ");
    scanf("%lf",&a2);
    printf("\nb2= ");
    scanf("%lf",&b2);
    printf("\nc2= ");
    scanf("%lf",&c2);

    double p=a1*b2-a2*b1;
    if((int)p!=0)
    {
        double x=(b2*c1-b1*c2)/p, y=(a1*c2-a2*c1)/p;
        printf("(x,y)=(%0.2lf, %0.2lf)\n",x,y);
    }
    else
    {
        printf("Value of x and y cannot be determined.\n");
    }*/

    //Interest:
   /* double amount, percent, year, interest, total, monthly;
    printf("Enter the amount of money:");
    scanf("%lf", &amount);
    printf("Enter the percentage:");
    scanf("%lf", &percent);
    printf("Enter the number of years:");
    scanf("%lf", &year);
    interest= amount*(percent/100)*year;
    total = amount + interest;
    monthly = total/(year*12);

    printf("Total= %0.2lf\nMonthly= %0.2lf", total, monthly);*/

    /*double c,f;
    printf("Enter Celcius: ");
    scanf("%lf", &c);
    f=1.8*c+32;
    printf("Farenheit: %0.2lf\n",f);*/

    //GCD LCM:
    /*int a,b,x,y;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    if(a<b)
    {
        x=a;
        y=b;
    }
    else
    {
        x=b;
        y=a;
    }

    for(; x>=1; x--)
    {
        if(a%x==0 && b%x==0)
        {
            printf("GCD = %d\n", x);
            break;
        }
    }

    for(; y<=a*b; y++)
    {
        if(y%a==0 &&y%b==0)
        {
            printf("LCM= %d", y);
            break;
        }
    }*/

    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d ",&a ,&b);

    if(a>b)
    {
        int r=a%b;
        if(r==0)
        {
            printf("GCD= %d", b);
        }
        else
        {
            a=b;
            b=a%b;
        }
    }

    else
    {
        int r=b%a;
        if(r==0)
        {
            printf("GCD= %d", a);
        }
        else
        {
            b=a;
            a=b%a;
        }
    }
        
    
                                                          
    return 0;

}