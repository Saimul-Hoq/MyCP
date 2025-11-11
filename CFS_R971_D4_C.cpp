#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x,y,k;
        cin>>x>>y>>k;

        if(x==0)
        {
            x+=y;
            if(x%k==0)
            {
                cout<<(x/k)*2<<endl;
            }
            else
            {
                cout<<((x/k)+1)*2<<endl;
            }
        }
        else if(y==0)
        {
            if(x==k)
            {
                cout<<1<<endl;
            }
            else
            {
                x+=y;
                if(x%k==0)
                {
                    cout<<(x/k)*2<<endl;
                }
                else
                {
                    cout<<((x/k)+1)*2<<endl;
                }
            }
        }

        else if(x>y)
        {
            if(x%k==0)
            {
                x=x/k;
            }
            else 
            {
                x=(x/k)+1;
            }
            if(y%k==0)
            {
                y=y/k;
            }
            else
            {
                y=(y/k)+1;
            }

            cout<<x+y+(x-y-1)<<endl;
        }
        else if(y>x)
        {
            swap(x,y);
            if(x%k==0)
            {
                x=x/k;
            }
            else 
            {
                x=(x/k)+1;
            }
            if(y%k==0)
            {
                y=y/k;
            }
            else
            {
                y=(y/k)+1;
            }

            cout<<x+y+(x-y)<<endl;

        }
        else if(x==y)
        {
            if(x%k==0)
            {
                x=x/k;
            }
            else 
            {
                x=(x/k)+1;
            }
            cout<<2*x<<endl;
        }
    }

    return 0;
}