#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int arr[200001];
    

    int t;
    cin>>t;

    while(t--)
    {
        for(int i=0; i<=200000; i++)
        {
            arr[i]=0;
        }
        
        int k;
        cin>>k;

        int num;
        for(int i=0; i<k; i++)
        {
            cin>>num;
            arr[num]++;
        }

        k-=2;
        for(int i=1; i<=sqrt(k); i++)
        {
            if(k%i==0)
            {
                if(arr[i]!=0 && arr[(k/i)]!=0)
                {
                    cout<<i<<" "<<k/i<<endl;
                    break;
                }
            }
        }
    }

    return 0;
}