#include<stdio.h>
#include<math.h>
//using namespace std;

/*int main()
{
    int t;
    cin>>t;

    int k[] = {2,3,5,7,13,17,19,31,61,89,107};
    unsigned long long int perfect[11], perfectNum,a,b;

    for(int i=0; i<11; i++)
    {
        
        a = pow(2, k[i]-1);
        b = pow(2, k[i])-1;

        perfectNum = a*b;
        perfect[i]=perfectNum;
        cout<<"Perfect Number = "<<perfectNum<<endl;
    }

    while(t--)
    {
        unsigned long long int n;
        cin>>n;

        int check=0;

        for(int i=0; i<11; i++)
        {
            if(n == perfect[i])
            {
                check = 1;
                break;
            }
        }
        

        if(check == 1)
        {
            cout<<"YES, "<<n<<" is a perfect number!"<<endl;
        }
        else
        {
            cout<<"NO, "<<n<<" is not a perfect number!"<<endl;

        }
    }

    return 0;
    
}*/






































int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        unsigned long int num, sum=1;
        scanf("%llu", &num);

        
        
        for(int i=2; i<=sqrt(num); i++)
        {
            if(num%i == 0)
            {
                sum = sum + i + num/i;
            }
        }

        if(num == sum)
        {
            printf("YES, %d is a perfect number!\n", num);
        }
        else
        {
            printf("NO, %d is a perfect number!\n", num);


        }

        
    }

    return 0;
}

