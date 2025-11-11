#include<iostream>
using namespace std;
#define endl "\n"

int main()
{
    int t, arr[10000], size[10000];
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>arr[i];
        int rev=0, count=0;
        while(arr[i]!=0)
        {
            count++;
            rev=rev*10 + arr[i]%10;
            arr[i]=arr[i]/10;
        }
        arr[i]=rev;
        size[i]=count;

    }

    int num, rev;
    for(int i=0; i<t; i++)
    {
        num=arr[i];
        if(num%10==1 && (num/10)%10==0)
        {
            num=num/100;
            if(num%10==0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                rev=0;
                for(int s=1; s<=size[i]-2; s++)
                {
                    rev=rev*10 + num%10;
                    num=num/10;
                }
                if(rev>=2)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;

    
}
