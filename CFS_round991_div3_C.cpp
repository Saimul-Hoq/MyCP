#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long sum=0;
        int check2=0, check3=0, check=0;

        if(n%9==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
             while(n!=0)
            {
                int num = n%10;
                n/=10;
                //sum+=num;
                if(num==2)
                {
                    check2=1;
                }
                else if(num==3)
                {
                    check3=1;
                }
            }

            long long temp = (n/9);
            temp = temp*9 + 9;
            long long m = temp - n;
            if(m==2 && check2==1)
            {
                check=1;
            }
            else if(m==6 && check3==1)
            {
                check=1;
            }
            if(check==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;

}