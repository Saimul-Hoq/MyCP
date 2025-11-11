#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, count=0;
        long long x, y, sum=0, sum2=0, check_sum=0;
        cin>>n>>x>>y;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }

        sort(arr, arr+n, greater<int>());

        int i, j;
        for(i=0, j=1; check_sum>=x && check_sum<=y; i++, j++)
        {
            sum2 = arr[i]+arr[j];
            check_sum=sum-sum2;
        }
        i--;
        j--;
        while(1)
        {
            sum2=arr[i]+arr[j];
            check_sum=sum-sum2;
            if(check_sum>y)
            {
                break;
            }
            sum2=0;
            check_sum=0;

            for(j=i+1; 1; j++)
            {
                sum2=arr[i]+arr[j];
                check_sum=sum-sum2;
                if(check_sum>=x && check_sum<=y)
                {
                    count++;
                }
                else
                {
                    break;
                }

                sum2=0;
                check_sum=0;


            }
        }
        

        cout<<count<<endl;



    }
    
    
    return 0;
}