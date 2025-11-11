#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int isPrime(int n)
{
   
    for(int i=3; i*i<=n; i+=2)
    {
        if(n%i==0)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(b-a == 0)
        {
            if(b%2==0)
            {
                if(b==2)
                {
                    cout<<-1<<endl;
                }
                else
                {
                    cout<<2<<" "<<b-2<<endl;
                }
            }
            else
            {
                int p = isPrime(b);
                if(p==-1)
                {
                    cout<<-1<<endl;
                }
                else
                {
                    int x = p*2;
                    int y = (b-x);
                    if(y<=0)
                    {
                        cout<<-1<<endl;
                    }
                    else
                    {
                        cout<<x<<" "<<y<<endl;
                    }

                }
            }
        }
        else
        {
            if(b%2==1)
            {
                b--;
            }
            if(b==2)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<2<<" "<<b-2<<endl;
            }
        }
    }

    
    
    return 0;
}