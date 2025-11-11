#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, sum;
        cin>>n>>sum;

        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        sort(arr, arr+n);
        int num=sum, count=0, i, j, k, check=0;
        for(i=n-1; i>=2; i--)
        {
            if(arr[i]<num)
            {
                num-=arr[i];
                count++;
                for(j=i-1; j>=1; j--)
                {
                    if(arr[j]<num)
                    {
                        num-=arr[j];
                        count++;

                        for(k=j-1; k>=0; k--)
                        {
                            if(arr[k]==num)
                            {
                                num-=arr[k];
                                count++;
                                check=1;
                                break;
                            }
                        }
                        if(k==-1)
                        {
                            num+=arr[j];
                            count--;
                        }
                        
                    }

                    if(check==1)
                    {
                        break;
                    }
                }
                
                if(j==0)
                {
                    num+=arr[i];
                    count--;
                }
            }

            if(check==1)
            {
                break;
            }
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

    return 0;
}