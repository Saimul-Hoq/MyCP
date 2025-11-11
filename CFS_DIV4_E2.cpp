#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
#define endl "\n"


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int l, r;
        cin>>l>>r;

        long long size=r-l+1, count=0, limit, j, i, limit2, lg;
        long long num;
        if(l==1)
        {
            count=3;
            for(int k=3; k<=r; k++)
            {
                lg=(int)(log(k)/log(3));
                count=count+lg+1;
            }
            cout<<count<<endl;

            continue;
        }
        num=l;

        lg=(int)(log(l)/log(3));
        count=lg+1;

        limit=count;
        limit2=size-1;
        if(limit<=(size-1))
        {
            for(i=1, j=l+1; i<=limit; i++, j++)
            {
                num=j*3;
                lg=(int)(log(num)/log(3));
                count=count+lg+1;
            }
            for(i=1; i<=((size-1)-limit); i++, j++)
            {
                num=j;
                lg=(int)(log(num)/log(3));
;
                count=count+lg+1;
            }

        }
        else if(limit%limit2==0)
        {
            for(i=1, j=l+1; i<=limit2; i++, j++)
            {
                int p=limit/limit2;
                num=j*pow(3, p);
                lg=(int)(log(num)/log(3));

                count=count+lg+1;
            }
        }
        else
        {
            for(i=1, j=l+1; i<=limit2; i++, j++)
            {
                int p=limit/limit2, q=limit%limit2;;
                num=j*pow(3, p);
                if(i<=q)
                {
                    num=num*3;
                }
                lg=(int)(log(num)/log(3));

                count=count+lg+1;
            }
        }

        cout<<count<<endl;




    }

    return 0;
}


/*int main()
{
    int a, b;
    cin>>a>>b;

   int lg = (log(a)/log(b));


    cout<<lg<<endl;

    return 0;
}*/











