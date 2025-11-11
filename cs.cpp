#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int n, max, index,sum=0, cnt=0, count=0; 
    cin>>n;
    string str[1000], match[1000];
    int arr[n];

    for(int j=0; j<n; j++)
    {
        cin>>str[j];
        cin>>arr[j];
    }
    
      
        for(int k=0; k<n; k++)
        {
            if(str[k].compare(str[0])==0)
            {
                sum+=arr[k];
            }
        }
        arr[0]=sum;
        match[count]=str[0];
        count++;
        sum=0;

        for(int k=1; k<n; k++)
        {
            for(int l=0; l<n; l++)
            {
                if(match[l].compare(str[k])==0)
                {
                    cnt=1;
                }
            }
            if(cnt!=1)
            {
                for(int l=0; l<n; l++)
                { 
                              
                    if(str[k].compare(str[l])==0)
                    {
                        sum+=arr[l];
                    }     
                }
            }
            arr[k]=sum;
            sum=0;
            cnt=0;
            match[count]=str[k];
            count++;
        }
        
        max=arr[0];
        index=0;
        for(int r=0; r<n; r++)
        {
            if(max<arr[r])
            {
                max=arr[r];
                index=r;
            }
        }


    

    cout<<str[index];

    return 0;
}