#include<iostream>
using namespace std;



int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, count2=0, count5=0;
        cin>>n;

        for(int i=2; i<=n; i++)
        {
            int num=i;
            while(num%2==0)
            {
                count2++;
                num=num/2;
            }
            num=i;
            while(num%5==0)
            {
                count5++;
                num=num/5;
            }
        }

        if(count2<count5)
        {
            cout<<count2<<endl;
        }
        else
        {
            cout<<count5<<endl;
        }

    }

    return 0;
}