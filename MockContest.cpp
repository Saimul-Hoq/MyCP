#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        int check=0;
        if((a==1 && b==1) || (a==1 && c==1) || (b==1 && c==1))
        {
            if(a==6 || b==6 || c==6)
            {
                check=1;
            }
        }
        else if(a==6 || b==6 || c==6)
        {
            if(a==3 || b==3 || c==3)
            {
                if(a==0 || b==0 || c==0)
                {
                    check=1;
                }
            }
        }

        else if(a==3 && b==3 && c==3)
        {
            check=1;
        }

        else if((a==4 && b==4) || (a==4 && c==4) || (b==4 && c==4))
        {
            if(a==0 || b==0 || c==0)
            {
                check=1;
            }
        }
        else if(a==4 || b==4 || c==4)
        {
            if(a==3 || b==3 || c==3)
            {
                if(a==1 || b==1 || c==1)
                {
                    check=1;
                }
            }
        }

        if(check==1)
        {
            cout<<"Case "<<t+1<<": perfectus"<<endl;
        }
        else
        {
            cout<<"Case "<<t+1<<": invalidum"<<endl;

        }
    }

    return 0;
}