#include<iostream>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n, s, m;
        cin>>n>>s>>m;
        
        int n2=2*n, arr[n2];

        for(int i=0; i<2*n; i++)
        {
            cin>>arr[i];
        }

        int ll=0, ul=arr[0], count=0,check=0, check2=0;

        for(int i=1; i<n2; i+=2)
        {
            if((ul-ll)>=s)
            {
                cout<<"YES"<<endl;
                check=1;
                break;
            }
            else
            {
                count++;
                ll=arr[i];
                
                if(count==n)
                {
                    ul=m;
                }
                else
                {
                    ul=arr[i+1];
                }
            }
        }
        if(check==0 && (ul-ll)>=s)
        {
            cout<<"YES"<<endl;
            check2=1;
        }
        if(check==0 && check2==0)
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}