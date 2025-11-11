#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int arr[501];
    arr[0]=-1;
    arr[1]=-1;
    arr[2]=66;

    int p, check, j;

    for(int n=3; n<=500; n++)
    {
        
        p=pow(10, n);
        j=1;
        while(arr[n-j]==-1)
        {
            j++;
        }
        for(int i=arr[n-j]; ; i+=66)
        {
            
            if(i/p!=0)
            {
                arr[n]=-1;
                break;
            }
            
            if((i/(p/10))!=0)
            {
               
                check=i;
                while(check!=0)
                {
                    if(check%10!=3 && check%10!=6)
                    {
                        break;
                    }
                    else
                    {
                        check/=10;
                    }
                }
                if(check==0)
                {
                    arr[n]=i;
                    break;
                }
            }

             
            
            
        }

    }

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        cout<<arr[n]<<endl;

    }


    return 0;
}